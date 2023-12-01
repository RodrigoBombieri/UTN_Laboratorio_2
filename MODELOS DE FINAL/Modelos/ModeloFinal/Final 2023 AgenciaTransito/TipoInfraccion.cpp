#include <iostream>
#include <cstring>
using namespace std;

#include "TipoInfraccion.h"

    TipoInfraccion::TipoInfraccion(){
        setIDTipoInfraccion(0);
        setDescripcion("Vacio");
        setCostoInfraccion(0);
        setNivelSeveridad(0);
    }   
    TipoInfraccion::TipoInfraccion(int idTipoInfraccion, std::string descripcion, float costoInfraccion, int nivelSeveridad){
        setIDTipoInfraccion(idTipoInfraccion);
        setDescripcion(descripcion);
        setCostoInfraccion(costoInfraccion);
        setNivelSeveridad(nivelSeveridad);
    }

    void TipoInfraccion::setIDTipoInfraccion(int idTipoInfraccion){
        _idTipoInfraccion = idTipoInfraccion;
    }
    int TipoInfraccion::getTipoInfraccion() const{
        return _idTipoInfraccion;
    }
    void TipoInfraccion::setDescripcion(std::string descripcion){
        strcpy(_descripcion, descripcion.c_str());
    }
    std::string TipoInfraccion::getDescripcion() const{
        return _descripcion;
    }
    void TipoInfraccion::setCostoInfraccion(float costoInfraccion){
        _costoInfraccion = costoInfraccion;
    }
    float TipoInfraccion::getCostoInfraccion() const{
        return _costoInfraccion;
    }
    void TipoInfraccion::setNivelSeveridad(int nivelSeveridad){
        _nivelSeveridad = nivelSeveridad;
    }
    int TipoInfraccion::getNivelSeveridad() const{
        return _nivelSeveridad;
    }