#pragma once
#include "Pago.h"
#include <string>

class PagoArchivo
{
public:
    PagoArchivo(std::string nombreArchivo);
    bool guardarRegistro(Pago pago);
    Pago leerRegistro(int pos);
    int contarRegistros();

private:
    std::string _nombreArchivo;
};