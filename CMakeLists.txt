cmake_minimum_required(VERSION 3.10)

PROJECT(ad-xolib LANGUAGES C CXX)

SET(CMAKE_CXX_STANDARD 14)

INCLUDE (${CMAKE_SOURCE_DIR}/cmake/utils.cmake)
INCLUDE(GenerateExportHeader)

ADD_PLATFORM_ARCH()

OPTION(BUILD_SHARED_LIBS "Build project with shared Opendds library" ON)
OPTION(BUILD_PYTHON_EMBED "Build project with Python embed " ON)

SET_PROPERTY(GLOBAL PROPERTY USE_FOLDERS ON)

IF( EXISTS "${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json" )
  EXECUTE_PROCESS( COMMAND ${CMAKE_COMMAND} -E copy_if_different
    ${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json
    ${CMAKE_CURRENT_SOURCE_DIR}/compile_commands.json
  )
ENDIF()

IF ( ${CMAKE_SYSTEM_NAME} MATCHES "Windows")
    IF (NOT CMAKE_BUILD_TYPE)
      SET(CMAKE_BUILD_TYPE Debug CACHE STRING 
         "Choose the type of build, options are : None Debug Release RelWithDebInfo MinSizeRel."
         FORCE)
    ENDIF()
ENDIF()

SET(CMAKE_DISABLE_SOURCE_CHANGES ON)
SET(CMAKE_DISABLE_IN_SOURCE_BUILD ON)

SET(PROJECT_CMAKE_ROOT "${CMAKE_SOURCE_DIR}/cmake")

SET(CMAKE_MODULE_PATH "${PROJECT_CMAKE_ROOT};${CMAKE_MODULE_PATH}")

#FIND_PACKAGE(PugiXML REQUIRED)

# The version number.
SET (XODR_VERSION_MAJOR 0)
SET (XODR_VERSION_MINOR 1)
SET (XODR_VERSION_PATCH 0)

set(XODR_VERSION ${XODR_VERSION_MAJOR}.${XODR_VERSION_MINOR}.${XODR_VERSION_PATCH})

# configure a header file to pass some of the CMake settings
# to the source code
CONFIGURE_FILE (
  "${PROJECT_SOURCE_DIR}/config.h.in"
  "${PROJECT_BINARY_DIR}/config.h"
)

# Always include the source and build directories in the include path.
SET(CMAKE_INCLUDE_CURRENT_DIR ON)

#SET(CMAKE_CXX_VISIBILITY_PRESET hidden)
#SET(CMAKE_VISIBILITY_INLINES_HIDDEN 1)

INCLUDE_DIRECTORIES(${PROJECT_BINARY_DIR})
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/deps/pugixml/src)

ADD_SUBDIRECTORY(deps) # for pybind11 & pugixml
ADD_SUBDIRECTORY(src)
IF(BUILD_PYTHON_EMBED)
    ADD_SUBDIRECTORY(bind)
ENDIF()
ADD_SUBDIRECTORY(appln)
