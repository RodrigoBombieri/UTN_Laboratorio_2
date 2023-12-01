#include "fechaHorario.h"
#include <string>  
#include "Fecha.h"
#include "horario.h"
#include <ctime>

Fecha FechaHorario::getFecha(){
    return _fecha;
}
Horario FechaHorario::getHorario(){
    return _horario;
}
void FechaHorario::setFecha(Fecha fecha){
    _fecha = fecha;
}
void FechaHorario::setHorario(Horario horario){
    _horario = horario;
}
/// otra forma se setear "manualmente" la fecha y el horario
void FechaHorario::setFecha(int dia, int mes, int anio){
    _fecha.setDia(dia);
    _fecha.setMes(mes);
    _fecha.setAnio(anio);
}
void FechaHorario::setHorario(int segundo, int minuto, int hora){
    _horario = Horario(segundo, minuto, hora);

}
// Constructores
FechaHorario::FechaHorario(){
   
}

FechaHorario::FechaHorario(int dia, int mes, int anio, int segundo, int minuto, int hora){
    _fecha.setDia(dia);
    _fecha.setMes(mes);
    _fecha.setAnio(anio);
    _horario.setSegundo(segundo);
    _horario.setMinuto(minuto);
    _horario.setHora(hora);
}
FechaHorario::FechaHorario(Fecha fecha, Horario horario){
    _fecha = fecha;
    _horario = horario;
}
std::string FechaHorario::toString(){
    std::string valorADevolver;
    valorADevolver = _fecha.toString() + " " + _horario.toString();
    return valorADevolver;
}