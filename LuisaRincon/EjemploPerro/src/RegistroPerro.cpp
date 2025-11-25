//
// Created by CRASHO on 23/11/2025.
//
#include <iostream>
#include <vector>
#include "RegistroPerro.h"
#include "Perro.cpp"
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::ios;

int registroPerro() {

    std::cout << "Dime la cantidad de perros a registrar: ";
    int cantidadPerros;
    std::cin >> cantidadPerros;
    std::vector<Perro> perrosArreglo(cantidadPerros);

    for (int i = 0; i < cantidadPerros; ++i) {
        Perro perro;

        std::cout << "Dime el nombre del perro: ";
        std::cin >> perro.nombrePerro;

        std::cout << "Dime la edad del perro: ";
        std::cin >> perro.edadPerro;

        std::cout << "Dime la raza del perro: ";
        std::cin >> perro.razaPerro;

        perrosArreglo[i] = perro;
    }
    return 0;

}