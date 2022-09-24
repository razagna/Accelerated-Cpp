cmake_minimum_required(VERSION 3.24)
project(Framing)

add_subdirectory(apps/frame_driver)
add_subdirectory(apps/hcat_driver)
add_subdirectory(apps/vcat_driver)

add_subdirectory(lib/Width)
add_subdirectory(lib/Frame)
