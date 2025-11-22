 #include <iostream>

#include "Calculo.h"


 using std::cout;
using std::endl;
using std::cin;

int  mostrarMenu()
{
    int opcion;
    cout << "Bienvenido a mi sistema de calculo de areas geometricas" << std::endl;
    cout << "Opcion 1 : Muestra la base del triangulo"<< std::endl;
    cout << "Opcion 2 : Calcula el area del triangulo"<< std::endl;
    cout << "Opcion 3 : Salir"<< std::endl;
    cin >> opcion;
    cin.ignore();
    return opcion;

}// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main()
{
   int opcion = mostrarMenu();
   switch (opcion) {
       case 1:
           Calculo calculo;
           calculo.base = 5;
           calculo.baseTriangulo();
       case 2:
           calculo.altura = 20;
           calculo.alturaTriangulo();
   }

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}