#pragma once
#include <string>
#include "Fecha.h"

class Transaccion
{
private:
	int _idTransaccion;
	std::string _descripcion;
	Fecha _fecha;
	int _idCategoria;
	float _monto;
	bool _estado;
public:

	Transaccion();
	Transaccion(int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, float monto, bool estado);

	void setIdTransaccion(int idTransaccion);
	int getIdTransaccion()const;

	void setDescripcion(const std::string& descripcion);
	std::string getDescripcion()const;

	void setFecha(const Fecha& fecha);
	Fecha getFecha()const;

	void setIdCategoria(int idCategoria);
	int getIdCategoria()const;

	void setMonto(float monto);
	float getMonto()const;

	void setEstado(bool estado);
	bool getEstado()const;

	std::string toString() const;
};

