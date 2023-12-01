#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#pragma once


void cargarDatos(int vCandidatos[], int *vMunicipios);


void puntoA(int *vCandidatos, int cantidadCandidatos);


void puntoB(int vMunicipios[], int cantidadMunicipios);


/**
 *Busca el valor màs grande dentro del vector y devuelve su indice.
 *@param int El vector a buscar el maximo.
 *@param int La cantidad de elementos del vector.
 *@returns int El indice correspondiente al valor mas grande del vector.
*/

int buscarIndiceMaximo(int vBusqueda[], int cantidad);


/**
 *Busca el valor màs grande dentro del vector y devuelve su indice.
 *@param int El vector a buscar el maximo.
 *@param int La cantidad de elementos del vector.
 *@param int La cantidad de elementos del vector.
 *@returns int El indice correspondiente al valor mas grande del vector.
*/

int contarMayoresAReferencia(int vBusqueda[], int cant, int valorReferencia);


#endif // FUNCIONES_H_INCLUDED
