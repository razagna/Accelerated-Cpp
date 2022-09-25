project(Grading_System)

add_subdirectory(apps/vector-based)
add_subdirectory(apps/list-based)

include_directories(
	${PROJECT_SOURCE_DIR}/include
#	${PROJECT_SOURCE_DIR}/src
)

file(GLOB SRCS
	"${PROJECT_SOURCE_DIR}/include/*"
	"${PROJECT_SOURCE_DIR}/src/*"
)

add_library(grading-system ${SRCS})
