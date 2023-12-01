#include <iostream>
#include <cstring>
using namespace std;

#include "Examen.h"

void Examen::Punto3(){


    ReclamoManager reclamoManager;
       
    //for(int i=0; i<3; i++){
       // reclamoManager.Cargar();
    //}
    Reclamo reclamo;
    ReclamoArchivo reclamoArchivo = ReclamoArchivo("reclamos.dat");
    int cantReclamos = reclamoArchivo.contarRegistros();

    Multa multa;
    MultaArchivo multaArchivo = MultaArchivo("multas.dat");
    int cantMultas = multaArchivo.getCantidadRegistros();

    MultaManager multaManager;


    for (int i=0; i<cantMultas; i++){
        multa = multaArchivo.leer(i);

        for(int j=0; j<cantReclamos; j++){
            reclamo = reclamoArchivo.leerRegistro(j);

            if(multa.getIDMulta() == reclamo.getIdMulta()){

                if(reclamo.getAceptado()){
                    cout << "MULTAS ELIMINADAS: " <<endl << endl;
                    multaManager.Listar(multa);
                    cout << reclamo.getMotivoReclamo() << endl << endl;
                }
            }
        }
    }


    cout << "Punto 3"<<endl;
}