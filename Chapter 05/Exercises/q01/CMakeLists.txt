project(Permuted_Index)

add_subdirectory(lib/Permuted_Index)
add_subdirectory(lib/Split)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE permuted_index)
target_include_directories(${PROJECT_NAME} PUBLIC lib/Permuted_Index)
