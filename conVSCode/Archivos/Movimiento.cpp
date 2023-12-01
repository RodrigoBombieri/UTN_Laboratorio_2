#include <cstring>
#include "Movimiento.h"

void Movimiento::setId(int id){
    _id = id;
}
    
int Movimiento::getId() const{
    return _id;
}

void Movimiento::setFecha(const Fecha &fecha){
    _fecha = fecha;
}
Fecha Movimiento::getFecha() const{
    return _fecha;
}

void Movimiento::setImporte(float importe){
    _importe = importe;
}
float Movimiento::getImporte() const{
    return _importe;
}

void Movimiento::setDescripcion(std::string descripcion){
    strcpy(_descripcion, descripcion.c_str()); /// .c_str transforma un string en un vector de char*
}
std::string Movimiento::getDescripcion() const{
    return _descripcion;
}

void Movimiento::setIdTipoMovimiento(int idTipoMovimiento){
    _tipoMovimiento = idTipoMovimiento;
}
int Movimiento::getIdTipoMovimiento() const{
    return _tipoMovimiento;
}

std::string Movimiento::getTipoMovimiento() const{    
    /// Forma 1 : operador ternario
    /// condicion ? valor si es true : valor si es false
    return _tipoMovimiento == 1 ? "Ingreso" : "Gasto";
    
    /*
    /// Forma 2
    std::string tipoMovimiento[2] = {"Ingreso", "Gasto"};
    return tipoMovimiento[_tipoMovimiento - 1];


    /// Forma 3
    if(_tipoMovimiento == 1){
        return "Ingreso";
    }else{
        return "Gasto";
    }*/
}


void Movimiento::setReferencia(std::string referencia){
    strcpy(_referencia, referencia.c_str());
}
std::string Movimiento::getReferencia() const{
    return _referencia;
}

void Movimiento::setEliminado(bool eliminado){
    _eliminado = eliminado;
}

bool Movimiento::getEliminado() const{
    return _eliminado;
}