#include <iostream>
#include "src/Perro.h"
using std::string;
using std::cout;
using std::endl;
using std::cin;
int  mostrarMenu()
{
    int opcion;
    cout << "Bienvenido a mi sistema de Perros" << std::endl;
    cout << "Opcion 1 : Quiero que el perro ladre"<< std::endl;
    cout << "Opcion 2 : Quiero que el perro muerda"<< std::endl;
    cout << "Opcion 3 : Quiero que el perro corra"<< std::endl;
    cout << "Opcion 4 : Salir"<< std::endl;
    std::cin >> opcion;
    cin.ignore();
    return opcion;

}
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int opcion = mostrarMenu();
    switch (opcion) {
        Perro Toby;
        Perro Manhattan;
        case 1:

        break;
        case 2:

        break;
        case 3:


        break;
    }
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}