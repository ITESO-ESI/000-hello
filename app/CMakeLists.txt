cmake_minimum_required(VERSION 3.22)
project(app)
set(CMAKE_C_STANDARD 99)

add_executable(${PROJECT_NAME} app.c)
target_link_libraries(${PROJECT_NAME} ${ASSIGNMENT_LIB})
target_include_directories(${PROJECT_NAME} PRIVATE ${${ASSIGNMENT_LIB}_SOURCE_DIR})

