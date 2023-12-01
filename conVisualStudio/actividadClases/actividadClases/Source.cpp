#include <iostream>
#include "Sistema.h"
#include "Gasto.h"
#include "Ingreso.h"
#include "Fecha.h"

using namespace std;

int main() {
	Sistema sistema;

	sistema.cargarTransacciones();

	sistema.mostrarGastos(); /// Punto a

	sistema.mostrarIngresoMasRedituable(); /// Punto b

	sistema.mostarSaldoTotal(); /// Punto c

	cout << "Hola mundo!";
	return 0;
}