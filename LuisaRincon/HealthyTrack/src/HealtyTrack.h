//
// Created by samir.diaz on 24/10/2025.
//

#ifndef HEALTHYTRACK_HEALTYTRACK_H
#define HEALTHYTRACK_HEALTYTRACK_H
#include <iostream>
#include <string>
#include <unordered_map>
#include "Categoria.h"
using namespace std;


class HealtyTrack {
private:
    std::unordered_map<std::string, Categoria *> categorias;
    std::vector<Usuarios*> usuarios;

public:

};


#endif //HEALTHYTRACK_HEALTYTRACK_H