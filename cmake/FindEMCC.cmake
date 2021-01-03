# Our initial guess will be within the SDK.
include(CheckIncludeFileCXX)
set(EMSDK_INSTALL_DIR "$ENV{HOME}/Desktop/emsdk" CACHE PATH "Path to emsdk installed location.")

set(_EMSDK_ENV_ROOT_DIR "$ENV{EMSDK}")

IF(NOT EMSDK_INSTALL_DIR AND _EMSDK_ENV_ROOT_DIR)
    set(EMSDK_ROOT_DIR "${_EMSDK_ENV_ROOT_DIR}")
ELSE()
    set(EMSDK_ROOT_DIR "${EMSDK_INSTALL_DIR}")
ENDIF()

IF (EMSDK_ROOT_DIR)
    set(EMSDK_BINARY_SEARCH_DIRS ${EMSDK_ROOT_DIR}
        ${EMSDK_ROOT_DIR}/upstream/emscripten
        ${EMSDK_ROOT_DIR}/upstream/bin
    )
ENDIF()

find_program(EMCC_EXECUTABLE NAMES emcc emcc.exe 
    HINTS
    ${EMSDK_BINARY_SEARCH_DIRS}
    PATH_SUFFIXES bin
    DOC "emscripten transpiler"
)

# IF (EMCC_EXECUTABLE)
# #TODO : to find version string of found emcc
#     execute_process(COMMAND "${EMCC_EXECUTABLE}" -v 
#                     RESULT_VARIABLE _EMCC_VERSION_RESULT
#                     ERROR_VARIABLE _EMCC_ERROR
#                     OUTPUT_VARIABLE _EMCC_OUTPUT
#     )
#     if (NOT ${_EMCC_VERSION_RESULT})
#         string(REPLACE "\n" ";" _EMCC_VERSION_LN ${_EMCC_ERROR})
#         list(APPEND EMCC_VERSION_LN ${_EMCC_VERSION_LN} "")
#         list(LENGTH EMCC_VERSION_LN length)
#         message(INFO ">>> ${length} : ${EMCC_VERSION_LN}")
#         LIST(GET ${EMCC_VERSION_LN} 1 HEAD)
#         message(INFO ">>>>> ${HEAD}")
#     endif()

# ENDIF()

function(get_interface_link_properties includes sources libname)
    get_target_property(INTERFACE_LINK_LIBS ${libname} INTERFACE_LINK_LIBRARIES)
    foreach(link_lib ${INTERFACE_LINK_LIBS})
        # get_target_property(SRCS ${link_lib} SOURCES)
        # get_target_property(SRC_DIR ${link_lib} SOURCE_DIR)
        # message(INFO " SRCS : ${SRCS} : ${SRC_DIR}")
        get_library_properties(link_includes link_sources ${link_lib}) 
        list(APPEND LINK_INCS ${link_includes})
        list(APPEND LINK_SRCS ${link_sources})
    endforeach()
    set(${includes} ${LINK_INCS} PARENT_SCOPE)
    set(${sources}  ${LINK_SRCS} PARENT_SCOPE)
endfunction()

function(get_source_cxx cxx_sources libname)
    get_target_property(SRCS ${libname} SOURCES)
    get_target_property(SRC_DIR ${libname} SOURCE_DIR)
    IF (NOT SRCS)
        return()
    ENDIF()
    foreach(SRC ${SRCS})
        get_filename_component(DIR ${SRC} DIRECTORY)
        get_filename_component(EXTN ${SRC} LAST_EXT)
        string(FIND ${EXTN} ".c" isCXXExtn)
        if (${isCXXExtn} EQUAL -1)
            continue()
        endif()
        if ("${DIR}" STREQUAL "")
            list(APPEND CXX_SRCS "${SRC_DIR}/${SRC}")
        else()
            list(APPEND CXX_SRCS "${SRC}")
        endif()
    endforeach()
    set(${cxx_sources} ${CXX_SRCS} PARENT_SCOPE)
    
endfunction()

function(get_library_properties includes sources libname)
    get_target_property(INCLUDE_DIRS ${libname} INCLUDE_DIRECTORIES)
    get_target_property(LIB_TYPE ${libname} TYPE)
    IF (${LIB_TYPE} STREQUAL "SHARED_LIBRARY")
        get_source_cxx(CXX_SOURCES ${libname})
    ELSEIF (${LIB_TYPE} STREQUAL "INTERFACE_LIBRARY")
        get_interface_link_properties(link_includes link_sources ${libname})
        set(INCLUDE_DIRS ${link_includes} )
        set(CXX_SOURCES ${link_sources})
        #set(LIB_PATH     ${link_libs} )
    ELSE()
        get_source_cxx(CXX_SOURCES ${libname})
    ENDIF()
    set(${includes} ${INCLUDE_DIRS} PARENT_SCOPE)
    set(${sources} ${CXX_SOURCES} PARENT_SCOPE)
endfunction()

macro(add_emcc_target name depend_libs sources)
    separate_arguments(depend_libs)
    separate_arguments(sources)
    foreach(lib ${depend_libs})
        get_library_properties(INC_DIRS LIB_SRCS ${lib})
        list(APPEND LIBRARY_SOURCES ${LIB_SRCS})
        list(APPEND INCLUDE_DIRS  ${INC_DIRS})
    endforeach()

    foreach(inc ${INCLUDE_DIRS})
        list(APPEND INCS " -I${inc} ")
    endforeach()

    # message(INFO  ${EMCC_EXECUTABLE} ${INCS}
    # --bind ${sources} --std=c++11 -s FORCE_FILESYSTEM=1 --no-entry -s LLD_REPORT_UNDEFINED  -s MODULARIZE=1
    # ${LIBRARY_SOURCES}
    # -o ${CMAKE_CURRENT_BINARY_DIR}/${name}
    # )

    add_custom_command(
        OUTPUT 
            ${CMAKE_CURRENT_BINARY_DIR}/${name}
        COMMENT 
            "Generating ${name} transpiling using emcc "
        DEPENDS 
            ${sources}
        WORKING_DIRECTORY
            ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND
            ${EMCC_EXECUTABLE} ${INCS}
            --bind ${sources} --std=c++1z -O3 -s FORCE_FILESYSTEM=1 --no-entry -s LLD_REPORT_UNDEFINED 
            ${LIBRARY_SOURCES}
            -o ${CMAKE_CURRENT_BINARY_DIR}/${name}
        VERBATIM 
    )

    add_custom_target (emcc-${name} ALL
        DEPENDS
            ${CMAKE_CURRENT_BINARY_DIR}/${name}
    )
    add_dependencies(emcc-${name} ${depend_libs})

endmacro()

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(EMCC DEFUALT_MSG 
    EMCC_EXECUTABLE 
)

if (EMCC_FOUND)
  message (STATUS "Found EMCC : ${EMCC_EXECUTABLE}")
else (EMCC_FOUND)
  message (STATUS "EMCC Not found , No JS Transpiling")
endif(EMCC_FOUND)

mark_as_advanced(EMCC_EXECUTABLE)