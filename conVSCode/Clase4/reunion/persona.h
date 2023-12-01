#pragma once
#include <string>

class Persona
{
private:
    std::string _apellidos, _nombres;
public:
    std::string getApellidos();
    std::string getNombres();
    std::string getApellidoYNombre();

    void setApellidos(std::string apellidos);
    void setNombres(std::string nombres);

    Persona();
    Persona(std::string apellidos, std::string nombres);
};




