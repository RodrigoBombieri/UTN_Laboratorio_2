#include <iostream>
using namespace std;
#include <cstdlib>
#include <locale.h>

#include "Vaso.h"

Vaso::Vaso(int cap)
{
    capacidad = cap;
}

int Vaso::getCapacidad(){
    return capacidad;
}

