cmake_minimum_required(VERSION 4.0)
project(EjemploPerro)

set(CMAKE_CXX_STANDARD 20)

add_executable(EjemploPerro main.cpp
        src/Perro.cpp
        src/Perro.h)
