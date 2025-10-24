cmake_minimum_required(VERSION 4.0)
project(HealthyTrack)

set(CMAKE_CXX_STANDARD 20)

add_executable(HealthyTrack main.cpp
        Usuario.cpp
        Usuario.h
        Habito.cpp
        Habito.h
        Categoria.cpp
        Categoria.h
        HealtyTrack.cpp
        HealtyTrack.h
        RegistroDiario.cpp
        RegistroDiario.h)
