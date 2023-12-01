#pragma once
#include "Gasto.h"
#include "Ingreso.h"

class Sistema
{
public:
	void cargarTransacciones();
	void mostrarGastos(); /// Punto a
	void mostrarIngresoMasRedituable(); /// Punto b
	void mostarSaldoTotal(); /// Punto c
	Gasto cargarGasto();
private:
	Gasto _gastos[5];
	Ingreso _ingresos[5];
	float _saldo;


};

