#include <iostream>
#include "src/Perro.h"
#include "src/RegistroPerro.cpp"

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::ios;

int  mostrarMenu()
{
    int opcion;
    cout << "Bienvenido a mi sistema de Perros" << std::endl;
    cout << "Opcion 1 : Registrar perros"<< std::endl;
    cout << "Opcion 2 : Quiero que el perro ladre"<< std::endl;
    cout << "Opcion 3 : Quiero que el perro muerda"<< std::endl;
    cout << "Opcion 4 : Quiero que el perro corra"<< std::endl;
    cout << "Opcion 5 : Salir"<< std::endl;
    std::cin >> opcion;
    cin.ignore();
    return opcion;

}
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int opcion = mostrarMenu();

    switch (opcion) {

        case 1:
           registroPerro();
        break;

        case 2:
        //Toby.ladrar();


        break;
        case 3:
        //Balto.morder();

        break;
        case 4:
        /*Toby.correr();
        Balto.correr();*/
        break;
    }
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}