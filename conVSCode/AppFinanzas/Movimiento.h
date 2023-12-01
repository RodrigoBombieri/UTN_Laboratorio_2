#pragma once

#include "Fecha.h"

class Movimiento{
public:
    Movimiento();

    void setId(int id);
    int getId() const;

    void setFecha(const Fecha &fecha);
    Fecha getFecha() const;

    void setImporte(float importe);
    float getImporte() const;

    void setDescripcion(std::string descripcion); /// si bien el atributo que almacenara la descripcion es un vector de CHAR, 
    std::string getDescripcion() const;         /// el parametro es un string, para facilitar el uso

    void setIdTipoMovimiento(int tipoMovimiento);
    int getIdTipoMovimiento() const;

    void setReferencia(std::string referencia);
    std::string getReferencia() const;

    std::string getTipoMovimiento() const;

    void setEliminado(bool eliminado);
    bool getEliminado() const;


private:
    int _id;
    Fecha _fecha;
    float _importe;
    char _descripcion[80]; // usamos vector de char en vez de string para evitar la memoria dinamica y perder los datos al salir del scope
                            // para que funcione correctamente, en los getters y setters hay que usar strcpy y c_str
    int _tipoMovimiento; // 1: ingreso, 2: salida
    char _referencia[100];
    bool _eliminado;
};