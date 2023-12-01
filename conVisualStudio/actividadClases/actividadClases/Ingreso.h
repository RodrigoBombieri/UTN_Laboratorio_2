#pragma once
#include "Transaccion.h"

class Ingreso : public Transaccion
{
private:
	int _tipoIngreso;
	std::string _referencia;
public:
	Ingreso();
	Ingreso(int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, int tipo, const std::string& referencia, float monto, bool estado);
	int getTipo()const;
	void setTipo(int tipo);

	std::string getReferencia()const;
	void setReferencia(std::string referencia);

	std::string tosString()const;




};

