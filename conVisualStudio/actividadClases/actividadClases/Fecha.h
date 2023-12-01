#pragma once

class Fecha
{
	// Actividad 1
private:
	int _dia, _mes, _anio;
	// Actividad 5
	int maximoDiaEnMes(int mes, int anio);
	void AgregarDia();
	void RestarDia();
	bool EsBiciesto(int anio);

public:
	// Actividad 4
	Fecha();
	// Actividad 3
	Fecha(int dia, int mes, int anio);

	// Actividad 2
	void setDia(int d);
	void setMes(int m);
	void setAnio(int a);

	int getDia();
	int getMes();
	int getAnio();

	void AgregarDias(int cant);
	/// transforma la fecha a una cadena de texto (string)
	/// Haciendo este metodo, luego podremos usar ese string como una variable
	std::string toString();

};

