#pragma once
#include <cstdio>

#include "TipoInfraccion.h"

class TipoInfraccionArchivo{
    public:
        TipoInfraccionArchivo(std::string nombreArchivo);
        bool guardarRegistro(TipoInfraccion tipoInfraccion);
        TipoInfraccion leerRegistro(int posicion);
        int contarRegistros();

    private:
        std::string _nombreArchivo;

};
