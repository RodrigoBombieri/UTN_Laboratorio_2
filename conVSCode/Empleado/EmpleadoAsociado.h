#pragma once
#include <string>
#include <iostream>

using namespace std;

#include "Empleado.h"

class EmpleadoAsociado : public Empleado
{
    private:
    float _sueldo;
    int _anio, _anioActual;
    float _sueldoFinal;
public:
    void Cargar();
    void CalcularSueldo();
    void Mostrar();
};