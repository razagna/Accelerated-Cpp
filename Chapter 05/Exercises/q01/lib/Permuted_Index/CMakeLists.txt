add_library(permuted_index permuted_index.cpp)

target_link_libraries(permuted_index split)
target_include_directories(permuted_index PUBLIC "../Split")
target_link_directories(permuted_index PRIVATE "../Split")