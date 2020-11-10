cmake_minimum_required(VERSION 3.17)
project(Labo03_Vectores)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Labo03_Vectores
        archivos/apariciones.txt
        archivos/estadisticas.txt
        archivos/interseccion1.txt
        archivos/interseccion2.txt
        archivos/palindromos.txt
        archivos/promedios1.txt
        archivos/promedios2.txt
        ejercicios.cpp
        ejercicios.h
        main.cpp)
