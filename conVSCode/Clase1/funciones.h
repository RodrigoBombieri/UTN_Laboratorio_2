#pragma once

void cargarDatos(int vectorCandidatos[], int *vectorMunicipios);


void puntoA(int *vectorCandidatos, int cantidadCandidatos);


void puntoB(int vectorMunicipios[], int cantidadMunicipios);

/**
 * Busca el valor mas grande dentro del vector y devuelve su indice
 * @param int vector a buscar el maximo
 * @param int cantidad de elementos del vector
 * @returns indice del valor mas grande encontrado
*/
int buscarPosicionMaximo(int vBusqueda[], int cantCandidatos);

/**
 * Cuenta la cantidad de valores mayores al valorReferencia y devuelve la cantidad
 * @param int vector de busqueda
 * @param int cantidad de elementos del vector
 * @param int valor de referencia para contabilizar los elementos del vector
 * @returns La cantidad de municipios con mayor cantidad de votos que el valorReferencia
*/
int contarMayoresAReferencia(int vBusqueda[], int cantidadMuni, int valorReferencia);