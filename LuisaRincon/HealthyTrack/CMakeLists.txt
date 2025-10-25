cmake_minimum_required(VERSION 4.0)
project(HealthyTrack)

set(CMAKE_CXX_STANDARD 20)

add_executable(HealthyTrack main.cpp
        src/Usuario.cpp
        src/Usuario.h
        src/Habito.cpp
        src/Habito.h
        src/Categoria.cpp
        src/Categoria.h
        src/HealtyTrack.cpp
        src/HealtyTrack.h
        src/RegistroDiario.cpp
        src/RegistroDiario.h)
