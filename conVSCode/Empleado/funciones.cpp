#include <iostream>
#include "funciones.h"
#include "Empleado.h"

using namespace std;

void mostrarMenu(){
    cout << "Menu" << endl;
    cout << "1. Empleado Asalariado" << endl;
    cout << "2. Empleado Por Hora" << endl;
    cout << "3. Empleado por Comision" << endl;
    cout << "4. Empleado Asociado" << endl;
    cout << "5. Listado de Empleados" << endl;
    cout << "0. Salir" << endl;
}

void cargarListadoEmpleados(Empleado *_empleado[], int _cantidad){
    for (int i = 0; i < _cantidad; i++)
    {
        _empleado[i].Empleado::Cargar();
    }

}

/*void mostarListadoEmpleados(Empleado *_empleado[], int _cantidad){
    int aux;
    /// mostrar un listado ordenado en forma ascendente por legajo
    for (int i = 0; i < _cantidad; i++)
    {
        for (int j = 0; j < _cantidad; j++)
        {
            if (_empleado[i].getLegajo() < _empleado[j].getLegajo())
            {
                aux = _empleado[i].getLegajo();
                _empleado[i].setLegajo(_empleado[j].getLegajo());
                _empleado[j].setLegajo(aux);
            }
        }
    }
    
}*/