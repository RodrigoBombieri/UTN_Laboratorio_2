#ifndef BIDON_H
#define BIDON_H
#include "Vaso.h"
#include <string>

class Bidon
{
    private:
        int capacidadMaxima;
        int capacidadActual;
        std::string sabor;


    public:
        void setCapacidadMaxima(int cap);
        Bidon();
        /// Sobrecargar un método es crear un método con el mismo nombre pero con diferentes parámetros.
        Bidon(int cap, std::string sab);
        int getCapacidad();
        std::string getSabor();
        void cargarBidon();
        void servirBatido(Vaso vaso);


};

#endif // BIDON_H
