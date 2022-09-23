set(PROG_NAME Horizontal_Concat)

add_executable(${PROG_NAME} main.cpp)

target_include_directories(${PROG_NAME} PUBLIC ../../lib/Frame)
target_link_directories(${PROG_NAME} PRIVATE ../../lib/Frame)
target_link_libraries(${PROG_NAME} frame)

