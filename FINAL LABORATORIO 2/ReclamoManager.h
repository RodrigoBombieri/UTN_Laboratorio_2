#pragma once
#include "Reclamo.h"
#include "ReclamoArchivo.h"
#include "MultaArchivo.h"
#include "MultaManager.h"

class ReclamoManager{
    public:
        void Cargar();
        void bajaLogica(int idMulta);
    
    private:
        ReclamoArchivo _reclamoArchivo = ReclamoArchivo("reclamos.dat");
        MultaArchivo _multaArchivo = MultaArchivo("multas.dat");

};