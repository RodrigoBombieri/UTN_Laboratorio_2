#pragma once
#include <string>
#include <iostream>

using namespace std;

#include "Empleado.h"

class Asalariado : public Empleado
{
private:
    float _sueldo;
public:
    
    void Cargar();
    void Mostrar();
    
};