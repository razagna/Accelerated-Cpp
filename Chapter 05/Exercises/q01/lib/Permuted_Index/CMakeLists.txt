add_library(permuted_index permuted_index.cpp)

target_link_libraries(permuted_index PRIVATE split)
target_include_directories(permuted_index PUBLIC ${CMAKE_SOURCE_DIR}/Examples/Split/lib/Split)
#target_link_directories(permuted_index PRIVATE ${CMAKE_SOURCE_DIR}/Examples/Split/lib/Split)
