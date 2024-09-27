cmake_minimum_required(VERSION 3.0)

project(hw2_20181755)

set(CMAKE_C_STANDARD 99)

add_executable(hw2_20181755
        hw2_20181755.c
)

target_link_libraries(hw2_20181755 m)