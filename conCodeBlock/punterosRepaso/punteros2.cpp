#include <iostream>
using namespace std;
#include <cstdlib>
#include <locale.h>

int main(){

    int vector[5]={10, 20, 30, 40, 50};
    int *puntero;

   puntero = vector;
    /// Muestra el contenido del vector

   cout << *puntero << endl;
   puntero++;
   cout << *puntero << endl;
   puntero++;
   cout << *puntero << endl;
   puntero++;
   cout << *puntero << endl;
   puntero++;
   cout << *puntero << endl;
   puntero++;

    cout << endl << endl;
    /// Muestra la direccion de memoria del primer elemento (posicion 0)
    cout << vector << endl;

    /// Accede a la direccion de memoria de la posicion siguiente del vector, hay 4 bytes entre cada posicion
    cout << vector+1 << endl;
    cout << vector+2 << endl;
    cout << vector+3 << endl;
    cout << vector+4 << endl;

    cout << endl << endl;

    /// Muestra la direccion de memoria (posicion 0, 1 y 2), hay 4 bytes entre cada posicion
    cout << &vector[0] << endl;
    cout << &vector[1] << endl;
    cout << &vector[2] << endl;
    cout << &vector[3] << endl;
    cout << &vector[4] << endl;


    /// Muestra el contenido
    cout << vector[1] << endl;


    /// Muestra el contenido del vector

    cout << endl << endl;

    cout << *(&vector[0]) << endl;
    cout << *(&vector[1]) << endl;
    cout << *(&vector[2]) << endl;
    cout << *(&vector[3]) << endl;
    cout << *(&vector[4]) << endl;

    cout << endl << endl;

    /// Muestra el contenido del vector

    cout << *(vector+1) << endl;
    cout << *(vector+2) << endl;
    cout << *(vector+3) << endl;
    cout << *(vector+4) << endl;

    /// Muestra el contenido del vector ------------> ES LA QUE MAS SE USA ------------------------>
    cout << endl << endl;

    cout << vector[0] << endl;
    cout << vector[1] << endl;
    cout << vector[2] << endl;
    cout << vector[3] << endl;
    cout << vector[4] << endl;

 setlocale(LC_ALL, "spanish");
 system("pause>nul");
 return 0;
}
