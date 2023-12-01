#include <iostream>
using namespace std;
#include "ReclamoArchivo.h"


ReclamoArchivo::ReclamoArchivo(string nombreArchivo){
    _nombreArchivo = nombreArchivo;
}


bool ReclamoArchivo::guardarRegistro(Reclamo reclamo){
    FILE *p;
    p = fopen(_nombreArchivo.c_str(), "ab");
    if(p==NULL){
        cout << "Error al abrir el archivo reclamos.dat";
        return false;
    }
    bool escribio = fwrite(&reclamo, sizeof(Reclamo),1,p);
    fclose(p);
    return escribio;
}

Reclamo ReclamoArchivo::leerRegistro(int pos){
    Reclamo reclamo;
    FILE *p;
    p = fopen(_nombreArchivo.c_str(), "rb");
    if(p==NULL){
        cout << "Error al abrir el archivo reclamos.dat";
        return reclamo;
    }

    fseek(p, pos*sizeof(Reclamo), SEEK_SET);
    fread(&reclamo, sizeof(Reclamo),1,p);
    fclose(p);
    return reclamo;
}

int ReclamoArchivo::contarRegistros(){
    FILE *p;
    p = fopen(_nombreArchivo.c_str(), "rb");
    if(p==NULL){
        cout << "Error al abrir el archivo reclamos.dat";
        return 0;
    }
    fseek(p,0,SEEK_END);
    int bytes = ftell(p);
    fclose(p);
    return bytes/sizeof(Reclamo);
}