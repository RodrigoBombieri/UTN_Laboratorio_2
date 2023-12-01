#pragma once
#include "Pago.h"
#include "PagoManager.h"
#include "PagoArchivo.h"

class Parcial
{
    public:
    void Punto3();

    private:
    PagoManager _pagoManager;
    PagoArchivo _pagoArchivo = PagoArchivo("pagos.dat");
};