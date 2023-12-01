
#include "Transaccion.h"

Transaccion::Transaccion()
{
	_idTransaccion = 0;
	_descripcion = "";
	_fecha = Fecha();
	_idCategoria = 0;
	_monto = 0;
	_estado = false;
}

Transaccion::Transaccion(int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, float monto, bool estado)
{
	_idTransaccion = idTransaccion;
	_descripcion = descripcion;
	_fecha = fecha;
	_idCategoria = idCategoria;
	_monto = monto;
	_estado = estado;
}

void Transaccion::setIdTransaccion(int idTransaccion) { _idTransaccion = idTransaccion; }
int Transaccion::getIdTransaccion()const { return _idTransaccion; }

void Transaccion::setDescripcion(const std::string& descripcion) { _descripcion = descripcion; }
std::string Transaccion::getDescripcion()const { return _descripcion; }

void Transaccion::setFecha(const Fecha& fecha) { _fecha = fecha; }
Fecha Transaccion::getFecha()const { return _fecha; }

void Transaccion::setIdCategoria(int idCategoria) { _idCategoria = idCategoria; }
int Transaccion::getIdCategoria()const { return _idCategoria; }

void Transaccion::setMonto(float monto) { _monto = monto; }
float Transaccion::getMonto()const { return _monto; }

void Transaccion::setEstado(bool estado) { _estado = estado; }
bool Transaccion::getEstado()const { return _estado; }

std::string Transaccion::toString()const {
	return "ID Transaccion: " + std::to_string(_idTransaccion) + "\nDescripcion: " + _descripcion + "\nMonto: " + std::to_string(_monto);// +"\nFecha: " + _fecha + "\nID Categoria: " + std::to_string(_idCategoria) + "\nID Metodo de Pago: " + std::to_string(_idMetodoPago) + "\nEstablecimiento: " + _establecimiento + "\nEstado: " + std::to_string(_estado);
}