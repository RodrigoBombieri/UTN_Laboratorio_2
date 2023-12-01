#pragma once
#include "Movimiento.h"
#include <string>

class MovimientoArchivos{
    public:
        MovimientoArchivos(std::string nombreArchivo);
        // para guardar un nuevo movimiento
        bool guardarMovimiento(Movimiento reg);
        // para sobreescribir movimiento, segun numero de registro
        bool guardarMovimiento(Movimiento reg, int nroRegistro);
        int contarRegistros();
        Movimiento leerArchivos(int nroRegistro);
        int buscar(int idMovimiento);

    private:
        std::string _nombreArchivo;
};