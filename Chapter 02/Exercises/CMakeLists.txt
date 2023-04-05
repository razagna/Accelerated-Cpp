cmake_minimum_required(VERSION 3.16.3)
project(Chapter_02)

file(GLOB EXAMPLES *.cpp)

foreach(example ${EXAMPLES})
    file(RELATIVE_PATH example ${CMAKE_CURRENT_SOURCE_DIR} ${example})
    string(REPLACE ".cpp" "" exec_name ${example})
    add_executable(${exec_name} ${example})
endforeach(example ${EXAMPLES})
