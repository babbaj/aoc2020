cmake_minimum_required(VERSION 3.17)
project(day5)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -march=native")

add_executable(day5 main.cpp)