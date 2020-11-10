cmake_minimum_required(VERSION 3.17)
project(L07_MatricesYTableros)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=gnu++11 -ggdb3 -g")

include_directories(lib)
include_directories(src)

add_executable(L07_MatricesYTableros
        lib/gtest-all.cc
        lib/gtest.h
        src/solucion.cpp
        src/solucion.h
        main.cpp)
