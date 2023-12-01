#pragma once
#include <string>
#include <iostream>

using namespace std;

class Empleado
{
protected:
    int _legajo;
    std::string _apellido;
    std::string _nombre;
    std::string _email;
public:
    void Cargar();
    void Mostrar();

    void setLegajo(int legajo);
    int getLegajo();
    void setApellido(std::string apellido);
    std::string getApellido();
    void setNombre(std::string nombre);
    std::string getNombre();
    void setEmail(std::string email);
    std::string getEmail();

    
};
