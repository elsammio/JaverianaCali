//
// Created by samir.diaz on 21/11/2025.
//

#include "Calculo.h"

#include <iostream>
#include <ostream>

using std::cout;
using std::endl;


//implemento metodos

void Calculo::baseTriangulo() {

    cout << "La base del triangulo es: "<<base << std::endl;
}
void Calculo::alturaTriangulo() {

    cout << "La altura del triangulo es: "<<altura << std::endl;
}

int Calculo::areaTriangulo(float base, float altura) {

    float area = (base * altura)/ 2;
    return area;
}

