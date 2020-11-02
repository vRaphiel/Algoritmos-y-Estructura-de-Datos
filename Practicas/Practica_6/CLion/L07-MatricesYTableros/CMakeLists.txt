cmake_minimum_required(VERSION 3.5)
project(L07-MatricesYTableros)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-pthread")

add_library(gtest lib/gtest-all.cc)

add_executable(L07-MatricesYTableros
        main.cpp
        src/solucion.cpp
        src/solucion.h
        )



set_target_properties(L07-MatricesYTableros PROPERTIES COMPILE_FLAGS "-g --coverage")
set_target_properties(L07-MatricesYTableros PROPERTIES LINK_FLAGS "-g --coverage")

target_link_libraries(L07-MatricesYTableros gtest)


