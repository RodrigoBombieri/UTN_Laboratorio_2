#include "MovimientoArchivos.h"
#include <cstdio>
// este constructor sirve para inicializar el nombre del archivo 
MovimientoArchivos::MovimientoArchivos(std::string nombreArchivo){
    _nombreArchivo = nombreArchivo;
}

bool MovimientoArchivos::guardarMovimiento(Movimiento reg){
    bool escribio;
    FILE *p = fopen(_nombreArchivo.c_str(), "ab"); /// añadir un nuevo movimiento al archivo
    if(p == NULL){
        return false;
    }
    escribio=fwrite(&reg, sizeof(Movimiento), 1, p); /// escribir el movimiento en el archivo, 
    fclose(p);
    return escribio;
}

bool MovimientoArchivos::guardarMovimiento(Movimiento reg, int posicion){
    bool escribio;
    FILE *p = fopen(_nombreArchivo.c_str(), "rb+"); /// sobreescribir un nuevo movimiento al archivo
    if(p == NULL){
        return false;
    }
    fseek(p, posicion*sizeof(Movimiento),SEEK_SET);
    escribio=fwrite(&reg, sizeof(Movimiento), 1, p); /// sobrescribir el movimiento en el archivo, 
    fclose(p);
    return escribio;
}

int MovimientoArchivos::contarRegistros(){
    FILE *p = fopen(_nombreArchivo.c_str(), "rb"); /// lee el archivo
    if(p == NULL){
        return 0; // si el archivo no existe devuelve 0 registros.
    }
    fseek(p, 0, SEEK_END);
    int bytes = ftell(p);
    fclose(p);
    return bytes / sizeof(Movimiento);
}

Movimiento MovimientoArchivos::leerArchivos(int posicion){
    Movimiento reg;
    FILE *p = fopen(_nombreArchivo.c_str(), "rb");
    if(p==NULL){
        return reg;
    }
    fseek(p,sizeof(Movimiento)*posicion,SEEK_SET);
    fread(&reg, sizeof(Movimiento),1,p);
    fclose(p);
    return reg;
}

int MovimientoArchivos::buscar(int idMovimiento){
    FILE *p = fopen(_nombreArchivo.c_str(), "rb");
    if(p==NULL){
        return -1;
    }
    int i =0;
    Movimiento reg;
    while(fread(&reg, sizeof(Movimiento),1,p)){
        if(reg.getId()==idMovimiento){
            fclose(p);
            return i;
        }
        i++;
    }
    fclose(p);
    return -1;
}

