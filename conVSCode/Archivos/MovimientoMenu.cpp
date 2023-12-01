#include <iostream>
using namespace std;
#include "MovimientoMenu.h"


void MovimientoMenu::Mostrar(){
    while(true){
       
   
    cout << "***************************************"<<endl;
    cout << "**********  MOVIMIENTOS  **************"<<endl;
    cout << "***************************************"<<endl;
    cout << "1. Nuevo Movimiento"<<endl;
    cout << "2. Editar Movimiento"<<endl;
    cout << "3. Eliminar Movimiento"<<endl;
    cout << "4. Listar Movimiento por ID"<<endl;
    cout << "5. Listar Movimientos"<<endl;
    cout << "6. Cantidad de registros"<<endl;
    cout << "***************************************"<<endl;
    cout << "7. Volver"<<endl;


    int opcion;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    switch(opcion){
        case 1:{
            Movimiento reg = _manager.Cargar();
            _manager.Mostrar(reg);
        }
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            cout << "Volver"<<endl;
            return;
            break;
        default:
            cout << "Opcion incorrecta"<<endl;
            break;
    }

     }

}