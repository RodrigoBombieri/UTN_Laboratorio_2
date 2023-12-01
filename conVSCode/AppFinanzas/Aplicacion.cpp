#include "Aplicacion.h"
#include <iostream>
using namespace std;

#include "MovimientoMenu.h"

/// VA A TENER EL MENU PRINCIPAL
void Aplicacion::Ejecutar(){
    while(true){
    cout << endl;
    cout << "***********************************************" << endl;
    cout << "************   APP DE FINANZAS   **************" << endl;
    cout << "***********************************************" << endl;
    cout << "1 - Movimientos." << endl;
    cout << "2 - Creditos." << endl;
    cout << "***********************************************" << endl;
    cout << "0 - Salir del programa" << endl;
    cout << endl;

    int opcion;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    cout << endl;
    switch(opcion){
        case 1:{
            MovimientoMenu menu;
            menu.Mostrar();
        }
        break;
        case 2:
            cout << "UTN - Laboratorio II" << endl;
            cout << endl;
        break;
        case 0:
            return;
        break;
    }

    }
}