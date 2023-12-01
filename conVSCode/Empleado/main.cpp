# include<iostream>


using namespace std;

#include "funciones.h"
#include "Empleado.h"
#include "Asalariado.h"
#include "EmpleadoPorHora.h"
#include "EmpleadoComision.h"
#include "EmpleadoAsociado.h"

int main()
{
    Empleado _empleado[10];
    Asalariado _asalariado;
    EmpleadoPorHora _empleadoPorHora;
    EmpleadoComision _empleadoComision;
    EmpleadoAsociado _empleadoAsociado;
    
    int opc;
    bool corte = true;

    while (corte==true)
    {
       mostrarMenu();
        cout << "Ingrese una opcion: ";
        cin >> opc;

       switch(opc){
        case 1:
            _asalariado.Cargar();
           // _asalariado.Mostrar();
           break;
        case 2:
            _empleadoPorHora.Cargar();
            _empleadoPorHora.CalcularSueldo();
            _empleadoPorHora.Mostrar();
           break;
        case 3:
            _empleadoComision.Cargar();
            _empleadoComision.CalcularSueldo();
            _empleadoComision.Mostrar();
           break;
        case 4:
           _empleadoAsociado.Cargar();
           _empleadoAsociado.CalcularSueldo();
           _empleadoAsociado.Mostrar();
           break;
         case 5:{
           cargarListadoEmpleados(_empleado, 10); 
            }
           //mostarListadoEmpleados(_empleado, 10);
           break;
        case 0:
            corte = false;
            break;
       }
    }
    

    
    
    
    
    return 0;
}