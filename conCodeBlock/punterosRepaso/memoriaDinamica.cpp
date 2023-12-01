#include <iostream>
using namespace std;
#include <cstdlib>
#include <locale.h>


/// ---------------------------- ASIGNACION DINAMICA DE MEMORIA ------------------------------------------

int main(){

    /// Asignacion fija de memoria: se le dice el tamaño de antemano.
    //int vector[5]={10, 20, 30, 40, 50};


    /// Asignacion dinámica
    ///int vEenteros[5000000]; // Se asigna en memoria "stack", entoces se desborda y tira un error

    // Memoria "heap": memoria compartida, se puede usar un mayor caudal de memoria, pero no garantiza
    // que los espacios que necesitamos no esten ocupados.

    // Dentro de la memoria stack se declaran punteros que piden memoria heap.

    /// "Este puntero no esta apuntando a ninguna direccion de memoria" ( *vec = nullptr )
    int *vec = nullptr, n;
    cin >> n;

    /// Pido memoria al heap

    vec = new int[n];

    //Si el vector está apuntando a algo ahora

    if(vec != nullptr){
        cout << "Tendo memoria disponible." << endl;
    }else{
        cout << "No me prestaron" << endl;
    }

    /// Para liberar memoria dinamica, sobre un puntero cuando no lo usamos
    delete []vec;


    //Devolver la memorua prestada cuando ya no la necesito;

    //delete vec;

    cout << "Fin del programa!";


    cout << "----------------------------------------------" << endl;

    int *vect = nullptr, num;

    for (int i=0; i<=10; i++){

     cout << "Tamanio dinamico del vector: " << endl;
     cin >> num;

     vec = new int[num];

     if(vec != nullptr){
        cout << "Tendo memoria disponible." << endl;
    }else{
        cout << "No me prestaron" << endl;
    }

    }


 setlocale(LC_ALL, "spanish");
 system("pause>nul");
 return 0;
}
