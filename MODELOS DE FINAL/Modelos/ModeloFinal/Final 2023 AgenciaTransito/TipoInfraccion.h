#pragma once
#include "Fecha.h"

class TipoInfraccion{
    public:
    TipoInfraccion();
    TipoInfraccion(int idTipoInfraccion, std::string descripcion, float costoInfraccion, int nivelSeveridad);

    void setIDTipoInfraccion(int idTipoInfraccion);
    int getTipoInfraccion() const;
    void setDescripcion(std::string descripcion);
    std::string getDescripcion() const;
    void setCostoInfraccion(float costoInfraccion);
    float getCostoInfraccion() const;
    void setNivelSeveridad(int nivelSeveridad);
    int getNivelSeveridad() const;
    

    private:
        int _idTipoInfraccion;
        char _descripcion[50];
        float _costoInfraccion;
        int _nivelSeveridad;
};
