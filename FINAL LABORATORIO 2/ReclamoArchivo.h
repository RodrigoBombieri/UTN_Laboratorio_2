#pragma once
#include "Reclamo.h"

class ReclamoArchivo{
    public:
        ReclamoArchivo(std::string nombreArchivo);
        bool guardarRegistro(Reclamo reclamo);
        Reclamo leerRegistro(int pos);
        int contarRegistros();
        bool validarIdMulta(int idMulta);
        
    private:
        std::string _nombreArchivo;
};