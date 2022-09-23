cmake_minimum_required(VERSION 3.0.0)
project(Split VERSION 0.1.0)

add_subdirectory(lib/Split)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC lib/Split)
target_link_directories(${PROJECT_NAME} PRIVATE lib/Split)
target_link_libraries(${PROJECT_NAME} split)
