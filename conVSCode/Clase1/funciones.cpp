#include <iostream>
#include "funciones.h"
using namespace std;

void cargarDatos(int vCandidatos[], int *vMunicipios){
    int candidato, municipio, cantidadVotos;
    
    cout << "Municipio: ";
    cin >> municipio;

    while (municipio !=0)
    {
        cout << "Candidato: ";
        cin >> candidato;
        cout << "Cantidad de votos: ";
        cin >> cantidadVotos;

        // A
        vCandidatos[candidato-1] += cantidadVotos;

        // B
        vMunicipios[municipio-1] += cantidadVotos;

        cout << "Municipio: ";
        cin >> municipio;
    }
}


void puntoA(int *vCandidatos, int cantidadCandidatos){
    int candidatoMasVotado = buscarPosicionMaximo(vCandidatos, cantidadCandidatos);
    
    cout << "El candidato mas votado es el " << candidatoMasVotado+1 << endl;

}


void puntoB(int vMunicipios[], int cantidadMunicipios){
    int municipioMasDe5000 = contarMayoresAReferencia(vMunicipios, cantidadMunicipios, 5000);
    cout << "La cantidad de municipios con mas de 5000 votos es: " << municipioMasDe5000 << endl;
}


int buscarPosicionMaximo(int vBusqueda[], int cantCandidatos){
    int posMax = 0;

    for(int x=0; x<cantCandidatos; x++){
        if(vBusqueda[x] > vBusqueda[posMax]){
            posMax = x;      
        }
    }
    return posMax;

}

int contarMayoresAReferencia(int vBusqueda[], int cantidadMuni, int valorReferencia){
    int cont = 0;
    for (int x=0; x<cantidadMuni; x++){
        if (vBusqueda[x]>valorReferencia){
            cont++;
        }
    }
    return cont;
}	