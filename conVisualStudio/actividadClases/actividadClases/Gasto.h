#pragma once
#include <string>
#include "Fecha.h"
#include "Transaccion.h"

class Gasto: public Transaccion
{
private:
	
	int _idMetodoPago;
	std::string _establecimiento;
	
public:

	Gasto();
	Gasto(int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, int idMetodoPago, const std::string& establecimiento, float monto, bool estado);

	
	void setIdMetodoPago(int idMetodoPago);
	int getIdMetodoPago()const;

	void setEstablecimiento(const std::string& establecimiento);
	std::string getEstablecimiento()const;

	std::string toString() const;

	/*
	void mostrarGasto()const;


	
	~Gasto();
	*/

};



