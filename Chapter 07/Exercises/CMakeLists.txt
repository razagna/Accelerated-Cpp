cmake_minimum_required(VERSION 3.24)
project(Chapter_xx)

include_directories(include)

file(GLOB SRCS
	"${PROJECT_SOURCE_DIR}/include/*"
	"${PROJECT_SOURCE_DIR}/src/*"
)

add_library(library ${SRCS})

file(GLOB ANSWERS *.cpp)

foreach(answer ${ANSWERS})
    file(RELATIVE_PATH answer ${CMAKE_CURRENT_SOURCE_DIR} ${answer})
    string(REPLACE ".cpp" "" exec_name ${answer})
    add_executable(${exec_name} ${answer})
    target_link_libraries(${exec_name} library)
endforeach(answer ${ANSWERS})
