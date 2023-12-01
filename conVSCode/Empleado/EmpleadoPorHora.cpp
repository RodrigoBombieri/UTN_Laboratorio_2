#include "EmpleadoPorHora.h" 

void EmpleadoPorHora::Cargar(){
    Empleado::Cargar();
    cout << "Ingrese el valor de la hora: ";
    cin >> _valorHora;
    cout << "Ingrese la cantidad de horas: ";
    cin >> _cantidadHoras;
 }

 void EmpleadoPorHora::CalcularSueldo(){
    _sueldo = _valorHora * _cantidadHoras; 
 }


void EmpleadoPorHora::Mostrar(){
    Empleado::Mostrar();
    cout << "Horas trabajadas: " << _cantidadHoras << endl;
    cout << "Sueldo recibido: " << _sueldo << endl;

}