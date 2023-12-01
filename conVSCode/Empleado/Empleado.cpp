#include "Empleado.h"

void Empleado::Cargar(){
    cout << "Ingrese el legajo: ";
    cin >> _legajo;
    cout << "Ingrese el apellido: ";
    cin >> _apellido;
    cout << "Ingrese el nombre: ";
    cin >> _nombre;
    cout << "Ingrese el email: ";
    cin >> _email;


}

void Empleado::Mostrar(){
    cout << "Legajo: " << _legajo << endl;
    cout << "Apellido: " << _apellido << endl;
    cout << "Nombre: " << _nombre << endl;
    cout << "Email: " << _email << endl;

}

void Empleado::setLegajo(int legajo){
    _legajo = legajo;
}

int Empleado::getLegajo(){
    return _legajo;
}

void Empleado::setApellido(std::string apellido){
    _apellido = apellido;
}

std::string Empleado::getApellido(){
    return _apellido;
}

void Empleado::setNombre(std::string nombre){
    _nombre = nombre;
}

std::string Empleado::getNombre(){
    return _nombre;
}

void Empleado::setEmail(std::string email){
    _email = email;
}

std::string Empleado::getEmail(){
    return _email;
}

