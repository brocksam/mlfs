cmake_minimum_required(VERSION 3.19)
project(mlfs VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(src)

add_subdirectory(examples)

enable_testing()

add_subdirectory(tests)
