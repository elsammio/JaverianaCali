//
// Created by samir.diaz on 24/10/2025.
//

#ifndef HEALTHYTRACK_CATEGORIA_H
#define HEALTHYTRACK_CATEGORIA_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Categoria {
private:
    string nombreCategoria;
    int metaConsitencia;
    float factorMotivacional;
    vector<string>recomendaciones;

public:
    Categoria() = default;
    Categoria(const string& nombreCategoria, int metaConsitencia, float factorMotivacional);
    void retornarRecomendacion();

};


#endif //HEALTHYTRACK_CATEGORIA_H