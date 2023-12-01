#include "persona.h"

std::string Persona::getApellidos(){
    return _apellidos;
}

std::string Persona::getNombres(){
    return _nombres;
}

std::string Persona::getApellidoYNombre(){
    if(_apellidos == "" && _nombres == "")
        return "Nombre no valido";
    return _apellidos + ", " + _nombres;
}

void Persona::setApellidos(std::string apellidos){
    _apellidos = apellidos;
}

void Persona::setNombres(std::string nombres){
    _nombres = nombres;
}

Persona::Persona(){
    setApellidos("");
    setNombres("");
}

Persona::Persona(std::string apellidos, std::string nombres){
    setApellidos(apellidos);
    setNombres(nombres);
}
