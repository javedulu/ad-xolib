cmake_minimum_required(VERSION 3.10)

PROJECT(ad-xolib LANGUAGES C CXX)

SET(CMAKE_CXX_STANDARD 14)

INCLUDE (${CMAKE_SOURCE_DIR}/cmake/utils.cmake)
INCLUDE(GenerateExportHeader)

ADD_PLATFORM_ARCH()

OPTION(BUILD_SHARED_LIBS "Build project with shared Opendds library" ON)
OPTION(BUILD_EMBED_TARGETS "Build project with embed targets Python / Javascript-c++(v8) / Emscripten" ON)

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

IF (MSVC)
	add_definitions(/bigobj)
	add_definitions(
		/wd4005 # 'TMP_MAX': macro redefinition
		/wd4013 # 'abort' undefined; assuming extern returning int
		/wd4018 # 'expression' : signed/unsigned mismatch
		/wd4065 # switch statement contains 'default' but no 'case' labels
		/wd4100 # unreferenced formal parameter
		/wd4146 # unary minus operator applied to unsigned type, result still unsigned
		/wd4201 # nonstandard extension used: nameless struct/union	
		/wd4210 # nonstandard extension used: function given file scope
		/wd4232 # nonstandard extension used: 'local_free': address of dllimport 'free' is not static, identity not guaranteed
		/wd4244 # 'conversion' conversion from 'type1' to 'type2', possible loss of data
		/wd4245 # 'conversion'conversion from 'int' to 'uint64_t', signed/unsigned mismatch	
		/wd4251 # 'identifier' : class 'type' needs to have dll-interface to be used by clients of class 'type2'
		/wd4267 # 'var' : conversion from 'size_t' to 'type', possible loss of data
		/wd4305 # 'identifier' : truncation from 'type1' to 'type2'
		/wd4307 # 'operator' : integral constant overflow
		/wd4309 # 'conversion' : truncation of constant value
		/wd4334 # 'operator' : result of 32-bit shift implicitly converted to 64 bits (was 64-bit shift intended?)
		/wd4355 # 'this' : used in base member initializer list
		/wd4456 # declaration of 'i' hides previous local declaration
		/wd4459 # declaration of 'wq' hides global declaration
		/wd4506 # no definition for inline function 'function'
		/wd4701 # potentially uninitialized local variable 'iosb' used	
		/wd4702 # unreachable code
		/wd4706 # assignment within conditional expression 
		/wd4800 # 'type' : forcing value to bool 'true' or 'false' (performance warning)
		/wd4996 # The compiler encountered a deprecated declaration.
	  )
ENDIF(MSVC)


INCLUDE_DIRECTORIES(${PROJECT_BINARY_DIR})
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/deps/pugixml/src)

ADD_SUBDIRECTORY(deps) # for pybind11 & pugixml
ADD_SUBDIRECTORY(src)
IF(BUILD_EMBED_TARGETS)
    ADD_SUBDIRECTORY(bind)
ENDIF()
ADD_SUBDIRECTORY(appln)
