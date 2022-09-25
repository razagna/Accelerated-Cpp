set(PROG_NAME Vertical_Concat)

add_executable(${PROG_NAME} main.cpp)

target_link_libraries(${PROG_NAME} PRIVATE frame)
target_include_directories(${PROG_NAME} PUBLIC ../../lib/Frame)
