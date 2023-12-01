#include <iostream>
#include "Gasto.h"



using namespace std;

Gasto::Gasto() : Transaccion()
{
	/// Una forma de llamar al constructor vacio de transaccion (clase base)
	
	_idMetodoPago = 0;
	_establecimiento = "";
}

Gasto::Gasto(int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, int idMetodoPago, const std::string& establecimiento, float monto, bool estado)
	: Transaccion(idTransaccion, descripcion, fecha, idCategoria, monto, estado)
{
	// Otra forma de llamar al constructor de la clase base
	
	_idMetodoPago = idMetodoPago;
	_establecimiento = establecimiento;
}


void Gasto::setIdMetodoPago(int idMetodoPago) { _idMetodoPago = idMetodoPago; }
int Gasto::getIdMetodoPago()const { return _idMetodoPago; }

void Gasto::setEstablecimiento(const std::string& establecimiento) { _establecimiento = establecimiento; }
std::string Gasto::getEstablecimiento()const { return _establecimiento; }



string Gasto::toString()const {
	/// llamo al metodo toString de la clase base y agrego los propios de esta clase
	return Transaccion::toString() + "\nID Metodo de Pago: " + std::to_string(_idMetodoPago) + "\nEstablecimiento: " + _establecimiento + "\n";
}