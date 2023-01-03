cmake_minimum_required(VERSION 3.24)
project(Student_info)

include_directories(include)

file(GLOB SRCS
	"${PROJECT_SOURCE_DIR}/include/*"
	"${PROJECT_SOURCE_DIR}/src/*"
)

add_library(library ${SRCS})

file(GLOB EXAMPLES *.cpp)

foreach(example ${EXAMPLES})
    file(RELATIVE_PATH example ${CMAKE_CURRENT_SOURCE_DIR} ${example})
    string(REPLACE ".cpp" "" exec_name ${example})
    add_executable(${exec_name} ${example})
    target_link_libraries(${exec_name} library)
endforeach(example ${EXAMPLES})
