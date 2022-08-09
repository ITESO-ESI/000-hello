cmake_minimum_required(VERSION 3.22)
project(test)
set(CMAKE_C_STANDARD 99)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake/Modules/")
find_package(Criterion REQUIRED)

add_executable(${PROJECT_NAME} hello.tests.c)
target_link_libraries(${PROJECT_NAME} PRIVATE ${CRITERION_LIBRARIES} ${ASSIGNMENT_LIB})
target_include_directories(${PROJECT_NAME} PRIVATE ${CRITERION_INCLUDE_DIRS} ${${ASSIGNMENT_LIB}_SOURCE_DIR})
