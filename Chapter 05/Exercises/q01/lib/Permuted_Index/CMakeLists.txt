add_library(permuted_index permuted_index.cpp)

target_link_libraries(permuted_index PRIVATE split)
target_include_directories(permuted_index PUBLIC ../Split) #${PROJECT_SOURCE_DIR}/lib/Split
