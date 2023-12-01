#include <iostream>
#include <cstring>
using namespace std;

#include "Parcial.h"
#include "Multa.h"
#include "MultaManager.h"
#include "MultaArchivo.h"



void Parcial::Punto3()
{
    Multa multa;
    MultaArchivo multaArchivo = MultaArchivo("multas.dat");
    int cantMultas = multaArchivo.getCantidadRegistros();

    Pago pago;
    PagoArchivo pagoArchivo = PagoArchivo("pagos.dat");
    int cantPagos = pagoArchivo.contarRegistros();

    //char _patente[8];
    std::string _patente;

    PagoManager pagoM;
    pagoM.Cargar();

    cout << "Ingresar la patente: (Formato XX 111 XX)" << endl;
    ///cin.ignore();
    cin >> _patente;

        int cantPagosRealizados = 0;
    for(int i=0; i<cantMultas; i++){
        multa = multaArchivo.leer(i);
    
        if(multa.getPatente()==_patente){

            for(int j=0; j<cantPagos; j++){
                pago = pagoArchivo.leerRegistro(j);
            
                if(multa.getIDMulta() == pago.getIdMulta() && multa.getPagada()){
                    cantPagosRealizados++;
                }
            }
        }
           
    }
        if(cantPagosRealizados>0){
            cout << "La patente: " << _patente << " tiene " << cantPagosRealizados << " pagos realizados" << endl;
        }else{
            cout << "La patente: " << _patente << " no registra pagos."<< endl;
        }
    
    cout << "Hello World From Class Parcial!" << endl;
}