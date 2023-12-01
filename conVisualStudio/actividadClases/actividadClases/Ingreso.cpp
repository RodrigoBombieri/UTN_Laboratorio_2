#include "Ingreso.h"

Ingreso::Ingreso() : Transaccion()
{
	_tipoIngreso = 0;
	_referencia = "";
}

Ingreso::Ingreso(int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, int tipo, const std::string& referencia, float monto, bool estado)
	: Transaccion(idTransaccion, descripcion, fecha, idCategoria, monto, estado), /// estos son los constructores de las composiciones
	_tipoIngreso(tipo),	/// estos son los constructores de las composiciones, se usan para inicializar las composiciones
	_referencia(referencia)  /// estos son los constructores de las composiciones, se usan para inicializar las composiciones
{
	_tipoIngreso = tipo;
	_referencia = referencia;
}

int Ingreso::getTipo() const
{
	return _tipoIngreso;
}

void Ingreso::setTipo(int tipo)
{
	_tipoIngreso = tipo;
}

std::string Ingreso::getReferencia() const
{
	return _referencia;
}

void Ingreso::setReferencia(std::string referencia)
{
	_referencia = referencia;
}

std::string Ingreso::tosString() const
{
	return Transaccion::toString() + "\nTipo: " + std::to_string(_tipoIngreso) + "\nReferencia: " + _referencia + "\n";
}
