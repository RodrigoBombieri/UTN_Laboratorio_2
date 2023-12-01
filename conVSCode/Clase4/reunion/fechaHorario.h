#pragma once
#include <string>
#include "fecha.h"
#include "horario.h"

class FechaHorario{
    public:
        Fecha getFecha();
        Horario getHorario();
        void setFecha(Fecha fecha);
        void setHorario(Horario horario);
        /// otra forma se setear "manualmente" la fecha y el horario
        void setFecha(int dia, int mes, int anio);
        void setHorario(int segundo, int minuto, int hora);
        // Constructores
        FechaHorario();
        FechaHorario(int dia, int mes, int anio, int segundo, int minuto, int hora);
        FechaHorario(Fecha fecha, Horario horario);

        std::string toString();

    private:
        // COMPOSICIÓN: que una clase sea una instancia de otra clase, la clase FechaHorario esta compuesta por la clase Fecha y la clase Horario
        // 
        Fecha _fecha;
        Horario _horario;
};