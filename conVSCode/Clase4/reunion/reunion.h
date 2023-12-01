#pragma once
#include "fechaHorario.h"
#include "persona.h"

class Reunion{
    public:
        FechaHorario getFechaHora();
        std::string getLugar();
        std::string getTema();
        int getDuracion();
        int getCantidadIntegrantes();
        Persona getIntegrante(int indice);
        std::string toString();

        void setFechaHorario(FechaHorario fechaHora);
        void setLugar(std::string lugar);
        void setTema(std::string tema);
        void setDuracion(int duracion);
        void setCantidadIntegrantes(int cantidadIntegrantes);
        void setIntegrante(int indice, Persona integrante);

        // aca pedimos la cantidad dinamica de integrantes
        Reunion(int _cantidadIntegrantes);
        //destructor donde cuando no se usa mas el objeto, liberamos la memoria
        ~Reunion();
    private:
        FechaHorario _fechaHora;
        std::string _lugar;
        std::string _tema;
        int _duracion, _cantidadIntegrantes;
        /// pedimos memoria dinamica dentro del objeto (cantidad de integrantes)
        Persona *_integrantes;

};