cmake_minimum_required(VERSION 3.0.0)
project(Framing VERSION 0.1.0)

add_subdirectory(apps/frame_driver)
add_subdirectory(apps/hcat_driver)
add_subdirectory(apps/vcat_driver)

add_subdirectory(lib/Width)
add_subdirectory(lib/Frame)
