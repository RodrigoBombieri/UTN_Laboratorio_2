#include <iostream>
#include "Fecha.h"


using namespace std;

/*
	Enunciado
Hacer una clase Fecha que permita generar objetos capaces de almacenar fechas 
y hacer operaciones con las mismas. 
La clase en ningún momento debe almacenar una fecha inválida. 
Es decir, una fecha que no exista en el calendario.
	
*/



int main() {
  
	Fecha miNacimiento(20, 12, 1990);
	cout << "Mi fecha de nacimiento: " << endl;
	cout << miNacimiento.toString() << endl;

	int dia, mes, anio;

	cout << "Ingresa el dia: ";
	cin >> dia;
	cout << "Ingresa el mes: ";
	cin >> mes;
	cout << "Ingresa el anio: ";
	cin >> anio;

	Fecha hoy(dia, mes, anio);
	Fecha ayer = hoy;
	Fecha manana = hoy;
	Fecha haceUnAnio = hoy;
	Fecha dentroDeUnAnio = hoy;

	cout << "Hoy es: " << hoy.toString() << endl;
	
	manana.AgregarDias(1);
	cout << "Manana es: " << manana.toString() << endl;
	
	ayer.AgregarDias(-1);
	cout << "Ayer fue: " << ayer.toString() << endl;

	haceUnAnio.AgregarDias(-365);
	cout << "Hace un anio era: " << haceUnAnio.toString() << endl;

	dentroDeUnAnio.AgregarDias(365);
	cout << "Dentro de un anio sera: " << dentroDeUnAnio.toString() << endl;



  return 0;
}