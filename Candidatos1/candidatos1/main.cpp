#include <iostream>
#include "funciones.h"

using namespace std;


/// Candidatos 1



int main()
{
    int vCandidatos[7]={};
    int vMunicipios[280]={};


    // Carga de datos

    cargarDatos(vCandidatos, vMunicipios);


    // Punto A

    puntoA(vCandidatos, 7);

    // Punto B

    puntoB(vMunicipios, 280);


    return 0;
}


