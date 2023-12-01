#pragma once

#include "TipoInfraccion.h"
#include "TipoInfraccionArchivo.h"

class TipoInfraccionManager{
    public:
    void Cargar();

    private:
    TipoInfraccionArchivo _tipoInfraccion = TipoInfraccionArchivo("tipoinfraccion.dat");
};