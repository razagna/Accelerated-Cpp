cmake_minimum_required(VERSION 3.24)
project(Split)

add_subdirectory(lib)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE split)
target_include_directories(${PROJECT_NAME} PUBLIC lib)
