cmake_minimum_required(VERSION 3.24)
project(Grading_System)

include_directories(
	${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/src
)

file(GLOB SRCS
	"${PROJECT_SOURCE_DIR}/include/*"
	"${PROJECT_SOURCE_DIR}/src/*"
)

add_executable(${PROJECT_NAME} main.cpp ${SRCS})
