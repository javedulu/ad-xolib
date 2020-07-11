set(TARGET_NAME pyxosc)

find_package(PythonInterp 3)
find_package(PythonLibs   3)

IF(PYTHONINTERP_FOUND)
	add_definitions(
		-DPYTHON_EMBED
	)
ENDIF()

IF ( ${CMAKE_SYSTEM_NAME} MATCHES "Windows")
    IF (${CMAKE_BUILD_TYPE} STREQUAL "Debug")
      message(STATUS "Debug output enabled -- $$$ Python Binding $$$ .. removing postfix")
      SET(CMAKE_DEBUG_POSTFIX "")
    ENDIF()
ENDIF()


set (HEADER_FILES "")
set (SOURCE_FILES pyxosc.cxx)
set (CONFIG_FILES __init__.py __test__.py)

pybind11_add_module(${TARGET_NAME}
	${HEADER_FILES}
	${SOURCE_FILES}
	${CONFIG_FILES}
)

target_link_libraries (${TARGET_NAME} PRIVATE xosc)

SET(TARGET_PATH ${CMAKE_BINARY_DIR}/pybind)

add_custom_command(TARGET ${TARGET_NAME} PRE_BUILD COMMAND ${CMAKE_COMMAND} -E make_directory ${TARGET_PATH})

file(GLOB_RECURSE  py_srcs "*.py")
foreach(pyfile ${py_srcs})
	add_custom_command(TARGET ${TARGET_NAME} POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${pyfile} ${TARGET_PATH})
endforeach()

#add_custom_command(TARGET ${TARGET_NAME} POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/config/config.json  ${TARGET_PATH}/network.json)

add_custom_command(TARGET ${TARGET_NAME} POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:pyxosc> ${TARGET_PATH})
