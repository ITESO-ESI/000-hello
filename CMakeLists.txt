cmake_minimum_required(VERSION 3.22)
project(hello_world)

add_subdirectory(lib)

SET(ASSIGNMENT_LIB ${PROJECT_NAME})
SET(BUILD_TESTS false) # set to true if local testing is available

add_subdirectory(app)
if(BUILD_TESTS)
    add_subdirectory(tests)
endif()
