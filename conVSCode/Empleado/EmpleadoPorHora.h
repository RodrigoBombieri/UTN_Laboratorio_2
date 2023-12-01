#pragma once
#include <string>
#include <iostream>

using namespace std;

#include "Empleado.h"

class EmpleadoPorHora : public Empleado
{
private:

    float _valorHora;
    float _cantidadHoras;
    float _sueldo;
public:
    void Cargar();
    void CalcularSueldo();
    void Mostrar();
};