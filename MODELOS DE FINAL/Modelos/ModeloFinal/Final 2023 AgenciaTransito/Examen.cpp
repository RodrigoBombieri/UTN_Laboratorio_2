#include <iostream>
using namespace std;

#include "Examen.h"

void Examen::Punto3()
{

    TipoInfraccion tipoInfraccion;
    TipoInfraccionArchivo tipoInfraccionArchivo = TipoInfraccionArchivo("tipoinfraccion.dat");
    int cantTipoInfraccion = tipoInfraccionArchivo.contarRegistros();

    Multa multa;
    MultaArchivo multaArchivo = MultaArchivo("multas.dat");
    int CantMultas = multaArchivo.getCantidadRegistros();

    Agente agente;
    AgenteArchivo agenteArchivo = AgenteArchivo("agentes.dat");
    int cantAgentes = agenteArchivo.getCantidadRegistros();

    TipoInfraccionManager tipoInfraccionManager;
    // for (int i = 0; i < 3; i++)
    // {
    //     tipoInfraccionManager.Cargar();
    // }

    int iDTipoInfraccion;
    cout << "Ingrese un ID de Tipo de infraccion: " << endl;
    cin >> iDTipoInfraccion;

    int contador = 0;
    for (int i = 0; i < cantTipoInfraccion; i++)
    {
        tipoInfraccion = tipoInfraccionArchivo.leerRegistro(i);

        if (tipoInfraccion.getTipoInfraccion() == iDTipoInfraccion)
        {
            for (int j = 0; j < cantAgentes; j++)
            {
                agente = agenteArchivo.leer(j);
                    bool primeraVez=true;
                    for (int k = 0; k < CantMultas; k++)
                    {
                        multa = multaArchivo.leer(k);

                        if (multa.getIDAgente() == agente.getIdAgente() && multa.getTipoInfraccion() == iDTipoInfraccion)
                        {
                            if(primeraVez){
                            primeraVez=false;
                            contador++;
                            }
                        }
                    }

            }
        }
    }

    if (contador > 0)
    {
        cout << "La cantidad de agentes distintos que realizaron al menos una multa para este tipo de infraccion son: " << endl;
        cout << contador << endl;
    }
}