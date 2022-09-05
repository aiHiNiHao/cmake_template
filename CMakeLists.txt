cmake_minimum_required(VERSION 3.0.0)
project(cmaketest VERSION 0.1.0 LANGUAGES CXX C)

add_subdirectory(src)


add_executable(Main main.cpp)

target_link_libraries(Main computer)

target_include_directories(Main PUBLIC src)



