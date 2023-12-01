#pragma once
#include <string>
#include <iostream>

using namespace std;

#include "Empleado.h"

class EmpleadoComision : public Empleado

{
private: 
float _salarioBase;
float _porcentajeComision;
float _sueldo;
public:

void Cargar();
void CalcularSueldo();
void Mostrar();


};