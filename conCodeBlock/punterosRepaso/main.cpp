#include <iostream>
using namespace std;
#include <cstdlib>
#include <locale.h>

int main(){

    float peso = 55.5;

    /// Guarda la direccion de memoria de una variable del mismo tipo del puntero
    float *punteroPeso;

    /// Le paso la direccion de memoria de la variable al puntero (el puntero puede alojar una direccion de memoria)
    punteroPeso = &peso;

    /// Muestra el contenido de la variable peso
    cout << "Peso: " << peso << endl;

    /// La direccion de memoria de la variable peso
    cout << "&Peso: " << &peso << endl;

    /// Muestra la DIRECCION de memoria de la variable que le pasé
    cout << "punteroPeso: " << punteroPeso << endl;

    /// Muestra el CONTENIDO de la variable que le pase
    cout << "*punteroPeso: " << *punteroPeso << endl;

    /// Cambio el contenido de la variable peso
    *punteroPeso = 77;

    /// Muestra el nuevo contenido de la variable
    cout << "Peso: " << peso << endl;

 setlocale(LC_ALL, "spanish");
 system("pause>nul");
 return 0;
}
