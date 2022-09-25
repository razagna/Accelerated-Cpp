project(Split)

add_subdirectory(lib/Split)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE split)
target_include_directories(${PROJECT_NAME} PUBLIC lib/Split)
