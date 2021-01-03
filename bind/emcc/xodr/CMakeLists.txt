include_directories(${CMAKE_CURRENT_SOURCE_DIR})

find_package(EMCC)

set(TARGET_SOURCES jsxodr.cxx)
set(TARGET_HTML_SOURCES jsxodr.html)
set(TARGET_DEPENDS xodr pugixml)

add_emcc_target(xodr.js "${TARGET_DEPENDS}" "${TARGET_SOURCES}")