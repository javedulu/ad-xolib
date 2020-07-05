#-------------------------------------------------------------------------------
MACRO (SET_GLOBAL_VARIABLE name value)
  SET (${name} ${value} CACHE INTERNAL "Used to pass variables between directories" FORCE)
ENDMACRO (SET_GLOBAL_VARIABLE)
#-------------------------------------------------------------------------------
MACRO(SUBDIRLIST RESULT CURDIR)
  FILE(GLOB children RELATIVE ${CURDIR} ${CURDIR}/*)
  SET(dirlist "")
  FOREACH(child ${children})
    IF(IS_DIRECTORY ${CURDIR}/${child})
      LIST(APPEND dirlist ${child})
    ENDIF()
  ENDFOREACH()
  SET(${RESULT} ${dirlist})
ENDMACRO()
#-------------------------------------------------------------------------------
MACRO(ADD_REMOTE_EXECUTABLE exe_name)

    SET(REMOTE_PLATFORM "linux")
    SET(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/deps/ssh2exec/cmake")

    INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})
    INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/deps/ssh2exec)
    INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

    FIND_PACKAGE(SSH2 REQUIRED)

    SET(REMOTE_PLATFORM_ARCH ${REMOTE_PLATFORM}_${ARCH})

    SET(TARGET_HEADERS
        #${CMAKE_SOURCE_DIR}/deps/ssh2exec/libssh2.hxx
        #${CMAKE_BINARY_DIR}/sshxconfig.h
    )

    # configure a header file to pass some of the CMake settings
    # to the source code
    configure_file (
        "${CMAKE_SOURCE_DIR}/sshxs/remotexec.cxx.in"
        "${CMAKE_CURRENT_BINARY_DIR}/${EXE_NAME}-remotexec.cxx"
    )

    SET(TARGET_SOURCES
        "${CMAKE_CURRENT_BINARY_DIR}/${EXE_NAME}-remotexec.cxx"
    )

    ADD_EXECUTABLE(${EXE_NAME}-remote 
       ${TARGET_SOURCES}
       ${TARGET_HEADERS}
    )

    TARGET_LINK_LIBRARIES(${EXE_NAME}-remote ${LIBSSH2_LIBRARY})

    SET_TARGET_PROPERTIES(${EXE_NAME}-remote PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

    SET_TARGET_PROPERTIES(${EXE_NAME}-remote  PROPERTIES FOLDER sshxs)
    
ENDMACRO()
#-------------------------------------------------------------------------------
MACRO (ADD_PLATFORM_ARCH)
    set(ARCH "x32")
    IF (${CMAKE_SIZEOF_VOID_P} EQUAL 8)
        set(ARCH "x64")
    ENDIF()

    if(APPLE)
      set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-narrowing -Wno-deprecated-declarations")
    endif()

    IF ( ${CMAKE_SYSTEM_NAME} MATCHES "Windows")
        set(PLATFORM "win32")
        add_definitions(-D_WIN32)
        add_definitions(-DNOMINMAX)
    ENDIF ( ${CMAKE_SYSTEM_NAME} MATCHES "Windows")
    IF(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
       # Mac OS X specific code
       set (CMAKE_MACOSX_RPATH 1)
       add_definitions(-DMAC_OSX)
       set(PLATFORM "darwin")
    ENDIF(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    IF(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
       # Linux specific code
       add_definitions(-DLINUX)
       set(PLATFORM "linux")
    ENDIF(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
ENDMACRO()


#IF (APPLE)
#    SET(REMOTE_BUILD "YES" CACHE BOOL "REMOTE BUILD FROM OSX to LINUX")
#ENDIF()
#
#IF(REMOTE_BUILD)
##TODO:
## 1. rsync the build directory to ros-linux
## 2. cd to build directory on ros-linux 
## 3. make on build direcotry on ros-linux
#set(REMOTE_URL ros@SJOLAP037.esi-internal.esi-group.com)
##set(REMOTE_URL ros@localhost)
#string(TIMESTAMP TODAY "%Y%m%d")
#set(REMOTE_DIR /tmp/${PROJECT_NAME}-${TODAY})
#
#ADD_CUSTOM_COMMAND(OUTPUT ${TARGET_NAME}Make 
#    COMMAND rsync -arvzh --exclude={xbuild/} ${CMAKE_SOURCE_DIR}/ ${REMOTE_URL}:${REMOTE_DIR}
#    COMMAND ssh -t ${REMOTE_URL} \"mkdir -p ${REMOTE_DIR}/build && cd ${REMOTE_DIR}/build && cmake .. -DREMOTE_BUILD:BOOL=NO\"
#    COMMAND ssh -t ${REMOTE_URL} \"cd ${REMOTE_DIR}/build && make\"
#    DEPENDS ${TARGET_NAME}
#    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#    COMMENT "BUILDING ASSIMPLOADER ... "
#)
#
#ADD_CUSTOM_TARGET(${TARGET_NAME}Build ALL DEPENDS ${TARGET_NAME}Make)
#
#ENDIF(REMOTE_BUILD)
