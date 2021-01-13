find_package(PythonInterp 3)
find_package(PythonLibs   3)

IF(PYTHONINTERP_FOUND)
    add_subdirectory(pyxosc)
    add_subdirectory(pyxodr)
ENDIF()
