cmake_minimum_required(VERSION 3.24)
project(Framing)

include_directories(include)

file(GLOB SRCS
	"${PROJECT_SOURCE_DIR}/include/*"
	"${PROJECT_SOURCE_DIR}/src/*"
)

add_library(library ${SRCS})

file(GLOB DRIVERS *.cpp)

foreach(driver ${DRIVERS})
    file(RELATIVE_PATH driver ${CMAKE_CURRENT_SOURCE_DIR} ${driver})
    string(REPLACE ".cpp" "" exec_name ${driver})
    add_executable(${exec_name} ${driver})
    target_link_libraries(${exec_name} library)
endforeach(driver ${DRIVER})