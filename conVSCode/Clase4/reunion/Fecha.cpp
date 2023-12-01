#include "Fecha.h"
#include <ctime>

void Fecha::setDia(int d) {
	_dia = d;
}

void Fecha::setMes(int m) {
	_mes = m;
}
void Fecha::setAnio(int a) {
	_anio = a;
}

int Fecha::getDia() {
	return _dia;
}

int Fecha::getMes() {
	return _mes;
}

int Fecha::getAnio() {
	return _anio;
}
/*
Fecha::Fecha() {
	setDia(1);
	setMes(1);
	setAnio(2023);
}*/

Fecha::Fecha(){
    time_t t = time(NULL);
    struct tm *f = localtime(&t);
    _dia = f-> tm_mday; /// indirecciona f y accede a tm_mday
    _mes = f-> tm_mon +1; /// indirecciona f y accede a tm_mon
    _anio = f-> tm_year + 1900;

}

Fecha::Fecha(int dia, int mes, int anio) {
	if (dia >= 1 && dia <= maximoDiaEnMes(mes, anio) && mes >= 1 && mes <= 12 && anio >= 1900) {
		setDia(dia);
		setMes(mes);
		setAnio(anio);
	}
	else {
		_dia = 1;
		_mes = 1;
		_anio = 2023;

	}

}

int Fecha::maximoDiaEnMes(int mes, int anio) {
	int diaMax = 31;
	if (mes == 11 || mes == 4 || mes == 6 || mes == 9) {
		diaMax = 30;
	}
	else if (mes == 2) {
		if (EsBiciesto(anio)) {
			diaMax = 29;
		}
		else {
			diaMax = 28;
		}
	}

	return diaMax;
}

bool Fecha::EsBiciesto(int anio) {
	bool biciesto = false;
	if (anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0) {
		biciesto = true;
	}

	return biciesto;
}

void Fecha::AgregarDia() {
	if (_dia == maximoDiaEnMes(_mes, _anio)) {
		_dia = 1;

		if (_mes == 12) {
			_mes = 1;
			_anio++;
			
		}
		else {
			_mes++;
		}
	}
	else {
		_dia++;
	}
}
void Fecha::RestarDia() {
	if (_dia == 1) {
		if (_mes == 1) {
			_dia = maximoDiaEnMes(12, _anio-1);
			_mes = 12;
			_anio--;

		}
		else {
			_dia = maximoDiaEnMes(_mes-1, _anio);
			_mes--;
			
		}
	}
	else {
		_dia--;

	}
}


void Fecha::AgregarDias(int cant) {
	if (cant > 0) {
		for (int i = 0; i < cant; i++) {
			AgregarDia();
		}
	}
	else if (cant < 0) {
		for (int i = 0; i < -cant; i++) {
			RestarDia();
		}
	}
}


std::string Fecha::toString() {
	std::string dia;
	std::string mes;
	std::string anio = std::to_string(_anio);

	if (_dia < 10) {
		dia = "0" + std::to_string(_dia);
	}
	else {
		dia = std::to_string(_dia);
	}

	if (_mes < 10) {
		mes = "0" + std::to_string(_mes);
	}
	else {
		mes = std::to_string(_mes);
	}

	return dia + "/" + mes + "/" + anio;


}