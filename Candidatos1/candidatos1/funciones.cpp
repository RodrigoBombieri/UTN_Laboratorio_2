#include <iostream>
#include "funciones.h"

using namespace std;


void cargarDatos(int vCandidatos[], int *vMunicipios){

        int candidato, municipio, cantidadVotos;

        cout << "Municipio: ";
        cin >> municipio;

        while(municipio==0){



        cout << "Candidato: ";
        cin >> candidato;

        cout << "Votos: ";
        cin >> cantidadVotos;



        /// A

        vCandidatos[candidato-1]+=cantidadVotos;


        /// B

        vMunicipios[municipio-1]+=cantidadVotos;



        cout << "Municipio: ";
        cin >> municipio;
    }

}


void puntoA(int *vCandidatos, int cantidadCandidatos){
    int candidatoMasVotado = buscarIndiceMaximo(vCandidatos, cantidadCandidatos);

    cout << "Candidato mas votado: " << candidatoMasVotado +1 << endl;


}


void puntoB(int vMunicipios[], int cantidadMunicipios){

    int cantMunicipios = contarMayoresAReferencia(vMunicipios, cantidadMunicipios, 5000);
    cout << "Cantidad municipios con mas de 500 votos: " << cantMunicipios << endl;



}


int buscarIndiceMaximo(int vBusqueda[], int cantidad){
    int posMaximo=0;

    for (int i=0; i<cantidad; i++){
        if(vBusqueda[i] > vBusqueda[posMaximo]){
            posMaximo = i;
        }
    }
    return posMaximo;
}


int contarMayoresAReferencia(int vBusqueda[], int cant, int valorReferencia){
    int cont=0;
    for(int i=0; i<cant; i++){
        if(vBusqueda[i]>valorReferencia){
            cont ++;
        }
    }

}
