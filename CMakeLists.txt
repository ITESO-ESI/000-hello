cmake_minimum_required(VERSION 3.22)
project(hello_world)

add_subdirectory(lib)

SET(ASSIGNMENT_LIB ${PROJECT_NAME})

add_subdirectory(app)
add_subdirectory(tests)
