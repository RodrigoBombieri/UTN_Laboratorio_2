#pragma once
#include "Pago.h"
#include "PagoArchivo.h"
#include "Multa.h"

class PagoManager {
    public:    
        float verificarDescuento(float importePago);
        void Cargar();
        void Listar(Pago pago);
    private:
        PagoArchivo _pagoArchivo = PagoArchivo("pagos.dat");
        /// Creo una instancia de PagoArchivo para poder usar sus metodos en PagoManager y le paso el nombre del archivo
};