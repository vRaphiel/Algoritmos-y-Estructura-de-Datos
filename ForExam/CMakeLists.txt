cmake_minimum_required(VERSION 3.17)
project(ForExam)

set(CMAKE_CXX_STANDARD 14)

add_executable(ForExam main.cpp
        files/ejerciciosParcial.h
        files/ejerciciosParcial.cpp
        files/matrices.h
        files/matrices.cpp
        sort/sortAlgorithm.h
        sort/sortAlgorithm.cpp
        files/auxiliares.h
        files/auxiliares.cpp
        test.h
        test.cpp)