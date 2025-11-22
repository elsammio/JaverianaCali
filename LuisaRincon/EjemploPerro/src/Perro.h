//
// Created by CRASHO on 22/11/2025.
//

#ifndef EJEMPLOPERRO_PERRO_H
#define EJEMPLOPERRO_PERRO_H
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;


class Perro {
    public:
    int edadPerro;
    string nombrePerro;
    string razaPerro;

    void ladrar();
    void morder();
    void correr();
    void comer();

};


#endif //EJEMPLOPERRO_PERRO_H