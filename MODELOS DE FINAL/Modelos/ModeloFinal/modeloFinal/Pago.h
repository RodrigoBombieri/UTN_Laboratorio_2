#pragma once
#include "Fecha.h"

class Pago{
private:
    int _idMulta;
    Fecha _fechaPago;
    int _idFormaPago;
    float _importePago;
    char _detallePago[50];
public:
    Pago();
    Pago(int idMulta, Fecha fechaPago, int idFormaPago, float importePago);

    void setIdMulta(int idMulta);
    void setFechaPago(const Fecha &fechaPago);
    void setIdFormaPago(int idFormaPago);
    void setImportePago(float importePago);
    void setDetallePago(std::string detallePago);

    int getIdMulta() const;
    Fecha getFechaPago() const;
    int getIdFormaPago() const;
    float getImportePago() const;
    std::string getDetallePago() const;
 
};