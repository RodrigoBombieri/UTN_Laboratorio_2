#include <iostream>
#include "funciones.h"
#include <cstring>

using namespace std;

void registroVentas(float vBidon[3], float vVasos[3], string vSabores[3]){
    int codigoBatido, tipoVaso;
    int vContador[3]={};


    cout << "Ingrese el codigo del batido: ";
    cin >> codigoBatido;

    while (codigoBatido !=0)
    {
       cout << "Ingrese el tipo de vaso: ";
       cin >> tipoVaso;
     
 
      if(vBidon[codigoBatido-1] > vVasos[tipoVaso-1]){
              vBidon[codigoBatido-1] -= vVasos[tipoVaso-1];
              vContador[codigoBatido-1]++;
         }else{
            cout << "El stock del sabor " << vSabores[codigoBatido-1] << " es menor al stock de vasos" << endl;
         }
      

       cout << "Ingrese el codigo del batido: ";
       cin >> codigoBatido;
    }

    for(int i=0; i<3; i++){
        cout << "El stock del sabor: " << vSabores[i] << " es: " << vBidon[i] <<  endl;
        cout << "La cantidad de batidos vendidos del sabor: " << vSabores[i] << " fue: " << vContador[i] <<  endl;
    }

}


