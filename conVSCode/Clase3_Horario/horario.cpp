#include "horario.h"
#include <string>
#include <ctime>
#include <iostream>
using namespace std;

int Horario::getSegundo(){
    return _segundo;
}
int Horario::getMinuto(){
    return _minuto;
}
int Horario::getHora(){
    return _hora;
}

void Horario::setSegundo(int segundo){
    _segundo : segundo;
}
void Horario::setMinuto(int minuto){
    _minuto  = minuto;
}
void Horario::setHora(int hora){
    _hora = hora;
}
/// Constructor que devuelve la fecha del sistema de hoy
Horario::Horario(){
    time_t t = time(NULL);
    struct tm *f = localtime(&t);
    _segundo = f-> tm_sec; /// la flecha indirecciona f y accede al atributo tm_sec, sino habria que escribir: (*f).tm_sec (que es lo mismo
    _minuto = f-> tm_min;
    _hora = f-> tm_hour;
   
}

Horario::Horario(int segundo, int minuto, int hora){
    setSegundo(segundo);
    setMinuto(minuto);
    setHora(hora);
 
}


std::string Horario::toString(){
    std::string valorADevolver;
    valorADevolver = std::to_string(_hora) + ":" + std::to_string(_minuto) + ":" + std::to_string(_segundo);
    return valorADevolver;
}

/// Devuelve el nombre del dia de la semana
/*
std::string Fecha::getNombreDia(){
    std::string nombresDias[7] = {"Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
    if(_diaSemana >= 0 && _diaSemana <= 6){
        return nombresDias[_diaSemana];
    }
    else{
        return "Dia no valido";
    }
}

*/