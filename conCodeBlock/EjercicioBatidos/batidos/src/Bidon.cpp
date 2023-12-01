#include <iostream>
using namespace std;
#include <cstdlib>
#include <locale.h>
#include "Bidon.h"


void Bidon::setCapacidadMaxima(int cap){
    if(cap >= 0)
        capacidadMaxima = cap;
    else{
        capacidadMaxima = 0;
        cout << "La capacidad debe ser mayor a 0" << endl;
    }
}

Bidon::Bidon(){
    capacidadMaxima = 0;
    capacidadActual = 0;
    sabor = "Sin Sabor";
}
/// Sobrecargar un método es crear un método con el mismo nombre pero con diferentes parámetros.
Bidon::Bidon(int cap, std::string sab){
    setCapacidadMaxima(cap);
    sabor = sab;
    capacidadActual = 0;
}

std::string Bidon::getSabor(){
    return sabor;
}

int Bidon::getCapacidad(){
    return capacidadActual;
}

void Bidon::cargarBidon(){
    capacidadActual = capacidadMaxima;
}

void Bidon::servirBatido(Vaso vaso){
    capacidadActual -= vaso.getCapacidad();
}

