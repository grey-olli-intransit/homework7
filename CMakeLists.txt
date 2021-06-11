CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
add_compile_options(-Wall -std=c++11)
PROJECT(HOMEWORK7)
add_executable(hw src/homework7.cpp)
target_include_directories(hw PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

