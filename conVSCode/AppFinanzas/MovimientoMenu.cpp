#include "MovimientoMenu.h"
#include <iostream> 
using namespace std;

void MovimientoMenu::Mostrar(){

    while(true){
    cout << endl;
    cout << "*******************************************" << endl;
    cout << "***************MOVIMIENTOS*****************" << endl;
    cout << "*******************************************" << endl;
    cout << "1 - Nuevo Movimiento." << endl;
    cout << "2 - Editar Movimiento." << endl;
    cout << "3 - Eliminar Movimiento." << endl;
    cout << "4 - Listar Movimientos por ID." << endl;
    cout << "5 - Listar Movimientos." << endl;
    cout << "6 - Cantidad de Registros." << endl;
    cout << "*******************************************" << endl;
    cout << "0 - Volver" << endl;
    cout << endl;

    int opcion;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    cout << endl;
    switch(opcion){
        case 1:
           _manager.cargarMovimiento();
        break;
        case 2:
            _manager.editar();
        break;
        case 3:
            _manager.eliminar();
        break;
        case 4:
            _manager.listarxID();
        break;
        case 5:
            _manager.listarTodos();
        break;
        case 6:
            _manager.mostrarCantidadRegistros();
        break;
        case 0:
            return;
        break;
    }

    }
}