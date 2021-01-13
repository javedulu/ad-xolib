include_directories(${CMAKE_CURRENT_SOURCE_DIR})

find_package(EMCC)

set(TARGET_SOURCES jsxosc.cxx)
set(TARGET_HTML_SOURCES jsxosc.html)
set(TARGET_DEPENDS pugixml xosc)

add_emcc_target(xosc.js "${TARGET_DEPENDS}" "${TARGET_SOURCES}")