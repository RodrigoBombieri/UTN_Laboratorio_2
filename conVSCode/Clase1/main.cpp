#include <iostream>
#include "funciones.h"
using namespace std;

int main()
{
    int *vectorCandidatos = nullptr, tamVecCand;
    cout << "Cantidad de candidatos: ";
    cin >> tamVecCand;

    vectorCandidatos = new int [tamVecCand];

    int *vectorMunicipios = nullptr, tamVecMuni;
    cout << "Cantidad de municipios: ";
    cin >> tamVecMuni;

    vectorMunicipios = new int [tamVecMuni];

    //int vCandidatos[7] = {};
    //int vMunicipios[280] = {};
  
    cargarDatos(vectorCandidatos, vectorMunicipios);
    puntoA(vectorCandidatos, tamVecCand);
    puntoB(vectorMunicipios, tamVecMuni);
    
    
    return 0;
}
