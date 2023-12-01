#include <iostream>
using namespace std;
#include "PagoArchivo.h"

PagoArchivo::PagoArchivo(string nombreArchivo) {
    _nombreArchivo = nombreArchivo; /// guardamos el nombre del archivo en el atributo _nombreArchivo
}


Pago PagoArchivo::leerRegistro(int pos) {
    Pago pago;
    FILE *p;
    p = fopen(_nombreArchivo.c_str(), "rb");
    if (p == NULL) {
        cout << "Error al abrir el archivo pagos.dat";
        return pago;
    }
    
    fseek(p, pos * sizeof(Pago), SEEK_SET);
    fread(&pago, sizeof(Pago), 1, p);
    fclose(p);
    return pago;
}

int PagoArchivo::contarRegistros() {
    FILE *p;
    p = fopen(_nombreArchivo.c_str(), "rb");
    if (p == NULL) {
        cout << "Error al abrir el archivo pagos.dat";
        return 0;
    }
    fseek(p, 0, SEEK_END); /// nos posicionamos al final del archivo
    int bytes = ftell(p); /// obtenemos la cantidad de bytes que tiene el archivo
    fclose(p);
    return bytes / sizeof(Pago); /// retornamos la cantidad de registros (tamaño del archivo / tamaño de un registro)
}


bool PagoArchivo::guardarRegistro(Pago pago) {
    FILE *p; /// creamos un puntero para manipular el archivo
    p = fopen(_nombreArchivo.c_str(), "ab"); /// abrimos el archivo en modo append binario 
    if (p == NULL) {
        cout << "Error al abrir el archivo pagos.dat";
        return false;
    }
    
    bool escribio = fwrite(&pago, sizeof(Pago), 1, p); /// escribimos el pago en el archivo
    fclose(p); /// cerramos el archivo
    return escribio; /// retornamos si se escribio o no
}