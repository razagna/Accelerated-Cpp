cmake_minimum_required(VERSION 3.24)
project(Chapter_04)

file(GLOB ANSWERS *.cpp)

foreach(answer ${ANSWERS})
    file(RELATIVE_PATH answer ${CMAKE_CURRENT_SOURCE_DIR} ${answer})
    string(REPLACE ".cpp" "" exec_name ${answer})
    add_executable(${exec_name} ${answer})
endforeach(answer ${ANSWERS})
