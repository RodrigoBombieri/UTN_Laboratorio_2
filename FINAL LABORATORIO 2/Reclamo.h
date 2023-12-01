#pragma once
#include "Fecha.h"

class Reclamo{
private:
    int _idMulta;
    Fecha _fechaReclamo;
    int _idSucursal;
    char _motivoReclamo[100];
    bool _aceptado;

public:
    Reclamo();
    Reclamo(int idMulta, Fecha fechaReclamo, int idSucursal, std::string motivoReclamo, bool aceptado);

    void setIdMulta(int idMulta);
    void setFechaReclamo(const Fecha &fechaReclamo);
    void setIdSucursal(int idSucursal);
    void setMotivoReclamo(std::string motivoReclamo);
    void setAceptado(bool aceptado);

    int getIdMulta() const;
    Fecha getFechaReclamo() const;
    int getIdSucursal() const;
    std::string getMotivoReclamo() const;
    bool getAceptado() const;
};