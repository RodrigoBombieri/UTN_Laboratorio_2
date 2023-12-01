#pragma once

#include "TipoInfraccion.h"
#include "TipoInfraccionManager.h"
#include "TipoInfraccionArchivo.h"
#include "MultaArchivo.h"
#include "AgenteArchivo.h"

class Examen{
    public:
    void Punto3();

    private:
    TipoInfraccionManager _tipoInfraccionManager;
    TipoInfraccionArchivo _tipoInfraccionArchivo = TipoInfraccionArchivo("tipoinfraccion.dat");

};
