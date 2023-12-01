#include <iostream>
using namespace std;

#include "TipoInfraccionArchivo.h"

TipoInfraccionArchivo::TipoInfraccionArchivo(std::string nombreArchivo){
    _nombreArchivo = nombreArchivo;
}

bool TipoInfraccionArchivo::guardarRegistro(TipoInfraccion tipoInfraccion){
    FILE *p;
    p = fopen(_nombreArchivo.c_str(), "ab");
    if(p==NULL){
        cout << "Error al abrir el archivo tipoinfraccion.dat" << endl;
        return false;
    }
    bool escribio = fwrite(&tipoInfraccion, sizeof(TipoInfraccion),1,p);
    fclose(p);
    return escribio;
}

TipoInfraccion TipoInfraccionArchivo::leerRegistro(int posicion){
    TipoInfraccion tipoInfraccion;
    FILE *p;
    p = fopen(_nombreArchivo.c_str(), "rb");
    if(p==NULL){
        cout << "Error al abrir el archivo tipoinfraccion.dat" << endl;
        return tipoInfraccion;
    }
    fseek(p, posicion*sizeof(TipoInfraccion),SEEK_SET);
    fread(&tipoInfraccion, sizeof(TipoInfraccion),1,p);
    fclose(p);
    return tipoInfraccion;
}

int TipoInfraccionArchivo::contarRegistros(){
    FILE *p;
    p = fopen(_nombreArchivo.c_str(), "rb");
    if(p==NULL){
        cout << "Error al abrir el archivo tipoinfraccion.dat" << endl;
        return 0;
    }
    fseek(p, 0, SEEK_END);
    int bytes = ftell(p);
    fclose(p);
    return bytes / sizeof(TipoInfraccion);
}