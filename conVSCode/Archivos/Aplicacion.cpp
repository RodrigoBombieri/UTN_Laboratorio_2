#include "Aplicacion.h"
#include <iostream>
using namespace std;

#include "MovimientoMenu.h"

void Aplicacion::Ejecutar(){
    while(true){
        cout << "***************************************"<<endl;
        cout << "**********  MOVIMIENTOS  **************"<<endl;
        cout << "***************************************"<<endl;
        cout << "1. Movimientos."<<endl;
        cout << "2. Creditos."<<endl;
        cout << "***************************************"<<endl;
        cout << "0. Salir del programa."<<endl;

        
    int opcion;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    switch(opcion){
        case 1:
            MovimientoMenu menu;
            menu.Mostrar();
            break;
        case 2:
            break;
        case 0:
            cout << "Volver"<<endl;
            return;
            break;
        default:
            cout << "Opcion incorrecta"<<endl;
            break;
        }

     }
}