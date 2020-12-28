# Our initial guess will be within the SDK.
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