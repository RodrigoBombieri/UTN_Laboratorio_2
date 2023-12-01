#include "EmpleadoAsociado.h"


void EmpleadoAsociado::Cargar(){
    Empleado::Cargar();
    cout << "Ingrese el anio de ingreso: ";
    cin >> _anio;
    cout << "Ingrese el anio actual: ";
    cin >> _anioActual;
    cout << "Ingrese el sueldo: ";
    cin >> _sueldo;
}
void EmpleadoAsociado::CalcularSueldo(){
    if(_anioActual - _anio > 20){
        _sueldoFinal = _sueldo * 1.5;
    }else if(_anioActual - _anio > 15){
        _sueldoFinal = _sueldo * 1.2;
    }else if(_anioActual - _anio > 5){
        _sueldoFinal = _sueldo * 1.1;
    }else{
        _sueldoFinal = _sueldo;
    }
}
void EmpleadoAsociado::Mostrar(){
    Empleado::Mostrar();
    cout << "Antiguedad: " << _anioActual - _anio << endl;
    cout << "Sueldo Final: " << _sueldoFinal << endl;
}