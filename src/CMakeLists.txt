add_subdirectory(xodr) #Opendrive 1.6
add_subdirectory(xosc) #OpenSCENARIO 1.0.0 
add_subdirectory(xoeng) #Scenario Engine 

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/common.h DESTINATION ${CMAKE_INSTALL_PREFIX}/include/${PROJECT_NAME})