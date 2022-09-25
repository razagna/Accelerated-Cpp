set(PROG_NAME list-based-solution)

add_executable(${PROG_NAME} main.cpp)


target_link_libraries(${PROG_NAME} PRIVATE grading-system)
target_include_directories(${PROG_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)
