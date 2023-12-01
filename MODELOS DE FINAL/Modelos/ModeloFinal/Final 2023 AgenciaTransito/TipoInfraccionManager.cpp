#include <iostream>
using namespace std;

#include "TipoInfraccionManager.h"

void TipoInfraccionManager::Cargar(){
    int idTipoInfraccion, nivelSeveridad;
    string descripcion;
    float costo;

    cout << "CARGANDO TIPO DE INFRACCION: " << endl;
    cout << "Ingrese el ID del tipo de infraccion: " << endl;
    cin >> idTipoInfraccion;
    cout << "Ingrese la descripcion: " << endl;
    cin.ignore();
    getline(cin, descripcion);
    cout << "Ingrese el costo de la infraccion: " << endl;
    cin >> costo;
    cout << "Ingrese el nivel de severidad: " << endl;
    cin >> nivelSeveridad;
    while(nivelSeveridad<0 && nivelSeveridad>10){
        cout << "Ingrese el nivel de severidad: " << endl;
        cin >> nivelSeveridad;
    }
    cout << endl;

    TipoInfraccion tipoInfraccion;

    tipoInfraccion.setIDTipoInfraccion(idTipoInfraccion);
    tipoInfraccion.setDescripcion(descripcion);
    tipoInfraccion.setCostoInfraccion(costo);
    tipoInfraccion.setNivelSeveridad(nivelSeveridad);

    bool ok = _tipoInfraccion.guardarRegistro(tipoInfraccion);

    if(ok){
        cout << "Registro guardado correctamente."<< endl;
    }else{
        cout << "Error al guardar el registro."<< endl;
    }

    cout << endl;
}
