#include "Asalariado.h"

void Asalariado::Cargar(){
    Empleado::Cargar();
    cout << "Ingrese el sueldo: ";
    cin >> _sueldo;


}
void Asalariado::Mostrar(){
    Empleado::Mostrar();
    cout << "Sueldo: " << _sueldo << endl;
}