#include <iostream>
#include "funciones.h"
#include <cstring>

using namespace std;

int main(){

    string vSabores[3]={"Banana", "Anana", "Sandia"};

     float vBidon[3]={20, 35, 44};
     
     float vVasos[3]={0.15, 0.20, 0.30};

 

    registroVentas(vBidon, vVasos, vSabores);

    
    return 0;
}