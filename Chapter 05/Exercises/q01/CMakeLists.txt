cmake_minimum_required(VERSION 3.0.0)
project(Permuted_Index VERSION 0.1.0)

add_subdirectory(lib/Permuted_Index)
#add_subdirectory(lib/Split)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} permuted_index)
target_include_directories(${PROJECT_NAME} PUBLIC lib/Permuted_Index)
target_link_directories(${PROJECT_NAME} PRIVATE lib/Permuted_Index)
