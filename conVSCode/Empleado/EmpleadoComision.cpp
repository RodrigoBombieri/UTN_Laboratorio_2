#include "EmpleadoComision.h"

void EmpleadoComision::Cargar(){
    Empleado::Cargar();
    cout << "Ingrese el salario base: ";
    cin >> _salarioBase;
    cout << "Ingrese el porcentaje de comision: ";
    cin >> _porcentajeComision;
}
void EmpleadoComision::CalcularSueldo(){
    _sueldo = _salarioBase + (_salarioBase * _porcentajeComision / 100);
}
void EmpleadoComision::Mostrar(){
    Empleado::Mostrar();
    cout << "Porcentaje de comision: " << _porcentajeComision << endl;
    cout << "Sueldo recibido: " << _sueldo << endl;
}