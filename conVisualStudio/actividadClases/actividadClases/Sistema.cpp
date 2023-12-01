#include <iostream>
#include <string>
#include "Sistema.h"
#include "Fecha.h"
#include "Gasto.h"
#include "Ingreso.h"

using namespace std;


void Sistema::cargarTransacciones() {
	_gastos[0] = Gasto(1, "Gasto 1", Fecha(1, 1, 2023), 1, 1, "Establecimiento 1", 1500, true);
	_gastos[1] = Gasto(2, "Gasto 2", Fecha(2, 1, 2023), 1, 1, "Establecimiento 1", 1700, true);
	_gastos[2] = Gasto(3, "Gasto 3", Fecha(3, 1, 2023), 1, 1, "Establecimiento 1", 1070, true);
	_gastos[3] = Gasto(4, "Gasto 4", Fecha(4, 1, 2023), 1, 1, "Establecimiento 1", 1007, true);
	_gastos[4] = Gasto(5, "Gasto 5", Fecha(5, 1, 2023), 1, 1, "Establecimiento 1", 7100, true);

	_ingresos[0] = Ingreso(1, "Ingreso 1", Fecha(10, 1, 2023), 1, 1, "Venta 1", 2500, true);
	_ingresos[1] = Ingreso(2, "Ingreso 2", Fecha(11, 1, 2023), 1, 1, "Venta 1", 3700, true);
	_ingresos[2] = Ingreso(3, "Ingreso 3", Fecha(12, 1, 2023), 1, 1, "Venta 1", 4070, true);
	_ingresos[3] = Ingreso(4, "Ingreso 4", Fecha(13, 1, 2023), 1, 1, "Venta 1", 5007, true);
	_ingresos[4] = Ingreso(5, "Ingreso 5", Fecha(14, 1, 2023), 1, 1, "Venta 1", 9100, true);
	
	
	/// Carga manual
	/*for (int i = 0; i < 5;i++) {
		_gastos[i] = cargarGasto();
	}*/

}

void Sistema::mostrarGastos() {
	for (int i = 0; i < 5;i++) {
		cout << _gastos[i].toString() << endl;
	}
}
void Sistema::mostrarIngresoMasRedituable() {
	float ingresoMasRedituable = 0;
	int bmax = 0;
	for (int i = 0; i < 5;i++) {
		if (bmax == 0) {
			ingresoMasRedituable = _ingresos[i].getMonto();
			bmax == 1;
		}else if(_ingresos[i].getMonto()> ingresoMasRedituable){
			ingresoMasRedituable = _ingresos[i].getMonto();
		}
	}
	cout << "El ingreso mas redituable es: $" << ingresoMasRedituable << endl;
}
void Sistema::mostarSaldoTotal() {
	_saldo = 0;
	for (int i = 0; i < 5;i++) {
		_saldo += _ingresos[i].getMonto();
	}
	for (int i = 0; i < 5;i++) {
		_saldo -= _gastos[i].getMonto();
	}

	cout << "El saldo total es: $" << _saldo << endl;
}

Gasto Sistema::cargarGasto() {
	int idTransaccion, dia, mes, anio, idCategoria, idMetodoPago;
	std::string descripcion, establecimiento;
	float importe;
	bool estado;

	cout << "Ingrese ID de transaccion: ";
	cin >> idTransaccion;
	cout << "Ingrese descripcion: ";
	cin.ignore(); /// para limpiar el buffer del enter que presiono el usuario en la entrada anterior.
	getline(cin, descripcion); /// para cargar string con espacios
	cout << "Ingrese dia: ";
	cin >> dia;
	cout << "Ingrese mes: ";
	cin >> mes;
	cout << "Ingrese anio: ";
	cin >> anio;
	cout << "Ingrese el ID de categoria: ";
	cin >> idCategoria;
	cout << "Ingrese el ID de metodo de pago: ";
	cin >> idMetodoPago;
	cout << "Ingrese establecimiento: ";
	cin.ignore();
	getline(cin, establecimiento);
	cout << "Ingrese importe: ";
	cin >> importe;
	estado = true;



	return Gasto(idTransaccion, descripcion, Fecha(dia, mes, anio), idCategoria, idMetodoPago, establecimiento, importe, estado);
}
