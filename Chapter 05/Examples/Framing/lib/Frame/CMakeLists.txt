add_library(frame frame.cpp)

target_link_libraries(frame PRIVATE width)
target_include_directories(frame PUBLIC "../Width")
#target_link_directories(frame PRIVATE "../Width")
