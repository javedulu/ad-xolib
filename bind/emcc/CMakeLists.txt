set(TARGET_NAME emcc-xosc)

include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(${CMAKE_SOURCE_DIR}/src/common)
include_directories(${CMAKE_SOURCE_DIR}/src/xosc)

find_package(EMCC)

add_custom_target(${TARGET_NAME} ALL
    DEPENDS
        "${CMAKE_CURRENT_BINARY_DIR}/xosc.js"
)

get_target_property(XOSC_INCLUDE_DIRS xosc INCLUDE_DIRECTORIES)
message(INFO ">>> XOSC_INCLUDE_DIRS : ${XOSC_INCLUDE_DIRS}")

get_target_property(XOSC_LINK_LIBRARIES xosc LINK_LIBRARIES)
message(INFO ">>> XOSC_LINK_LIBRARIES : ${XOSC_LINK_LIBRARIES}")

get_target_property(XOSC_BINARY_DIRECTORY xosc BINARY_DIR)
message(INFO ">>> XOSC_BINARY_DIRECTORY : ${XOSC_BINARY_DIRECTORY}")

#get_target_property(XOSC_)
message(INFO ">>> XOSC_LIBRARY_PATH : ${CMAKE_STATIC_LIBRARY_PREFIX}xosc${CMAKE_STATIC_LIBRARY_SUFFIX}")

add_custom_command(
    OUTPUT
        "${CMAKE_CURRENT_BINARY_DIR}/xosc.js"
    COMMENT
        "This is generating javascript from emcc "
    WORKING_DIRECTORY
        ${CMAKE_CURRENT_SOURCE_DIR}
    COMMAND
        ${EMCC_EXECUTABLE} -I${CMAKE_SOURCE_DIR}/src/xosc 
                           -I${CMAKE_SOURCE_DIR}/src
                           -I${CMAKE_SOURCE_DIR}/deps/pugixml/src
                           -I${CMAKE_BINARY_DIR}
                           -I${CMAKE_BINARY_DIR}/src/xosc 
                           -L${CMAKE_BINARY_DIR}/src/xosc 
                           --bind jsxosc.cxx -O3 --std=c++11
                           ${CMAKE_SOURCE_DIR}/src/xosc/xosc.cxx
                           ${CMAKE_SOURCE_DIR}/deps/pugixml/src/pugixml.cpp
                            -o ${CMAKE_CURRENT_BINARY_DIR}/xosc.js
    DEPENDS
        ${CMAKE_CURRENT_SOURCE_DIR}/jsxosc.cxx
)
