#pragma once
#include <string>

/*
    PascalCase
*/

class Horario{
    public:
        int getSegundo();
        int getMinuto();
        int getHora();

        void setSegundo(int segundo);
        void setMinuto(int minuto);
        void setHora(int hora);

        Horario();
        Horario(int segundo, int minuto, int hora);
        std::string toString();

        std::string getNombreDia();

    private:
        int _segundo, _minuto, _hora;
        int _diaSemana;
};