#include <cstring>
#include <iostream>
using namespace std;

#include "Reclamo.h"

Reclamo::Reclamo(){
    setIdMulta(0);
    setFechaReclamo(Fecha());
    setIdSucursal(0);
    setMotivoReclamo("Vacio");
    setAceptado(false);
}

Reclamo::Reclamo(int idMulta, Fecha fechaReclamo, int idSucursal, std::string motivoReclamo, bool aceptado){
    setIdMulta(idMulta);
    setFechaReclamo(fechaReclamo);
    setIdSucursal(idSucursal);
    setMotivoReclamo(motivoReclamo);
    setAceptado(aceptado);
}

    void Reclamo::setIdMulta(int idMulta){
        _idMulta = idMulta;
    }
    void Reclamo::setFechaReclamo(const Fecha &fechaReclamo){
        _fechaReclamo = fechaReclamo;
    }
    void Reclamo::setIdSucursal(int idSucursal){
        _idSucursal = idSucursal;
    }
    void Reclamo::setMotivoReclamo(std::string motivoReclamo){
        strcpy(_motivoReclamo, motivoReclamo.c_str());
    }
    void Reclamo::setAceptado(bool aceptado){
        _aceptado = aceptado;
    }

    int Reclamo::getIdMulta() const{
        return _idMulta;
    }
    Fecha Reclamo::getFechaReclamo() const{
        return _fechaReclamo;
    }
    int Reclamo::getIdSucursal() const{
        return _idSucursal;
    }
    std::string Reclamo::getMotivoReclamo() const{
        return _motivoReclamo;
    }
    bool Reclamo::getAceptado() const{
        return _aceptado;
    }