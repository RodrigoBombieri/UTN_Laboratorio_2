#include <iostream>
using namespace std;

#include "ReclamoManager.h"

void ReclamoManager::Cargar(){
    int idMulta, idSucursal, dia, mes, anio;
    string motivoReclamo;
    Fecha fechaReclamo;
    bool aceptado;
    char opcion;

    cout << "Cargando Reclamo: " << endl;
    cout << "Ingrese el ID de Multa: "<< endl;
    cin >> idMulta;
    while (_reclamoArchivo.validarIdMulta(idMulta)) {
        cout << "Ya existe un reclamo con ese ID de Multa, ingrese uno nuevo: " << endl;
        cin >> idMulta;
    }
    cout << "Ingrese la Fecha del reclamo: " << endl;
    cout << "Dia: "<<endl;
    cin >> dia;
    cout << "Mes: "<<endl;
    cin >> mes;
    cout << "Anio: "<<endl;
    cin >> anio;
    cout << "Ingrese el ID de Sucursal: "<< endl;
    cin >> idSucursal;
    while(idSucursal<0 || idSucursal>5){
        cout << "El ID de Sucursal debe estar entre 0 y 5: "<< endl;
        cin >> idSucursal;
    }
    cout << "Ingrese el Motivo del reclamo: "<< endl;
    cin.ignore();
    getline(cin, motivoReclamo);
    
    cout << "Reclamo aceptado? S/N: " << endl;
    cin >> opcion;
    if(toupper(opcion) == 'S'){
        aceptado = true;
        bajaLogica(idMulta);
    }else{
        aceptado = false;
    }
    cout << endl << endl;


    Reclamo reclamo;
    
    reclamo.setIdMulta(idMulta);
    reclamo.setFechaReclamo(Fecha(dia, mes, anio));
    reclamo.setIdSucursal(idSucursal);
    reclamo.setMotivoReclamo(motivoReclamo);
    reclamo.setAceptado(aceptado);

    bool ok = _reclamoArchivo.guardarRegistro(reclamo);
    if(ok){
        cout << "Reclamo guardado con exito."<<endl;
    }else{
        cout << "Error al guardar el reclamo." << endl;
    }
    cout << endl;
}

void ReclamoManager::bajaLogica(int idMulta){
    int posicion;
    posicion = _multaArchivo.buscar(idMulta);

    if(posicion>=0){
        Multa aux = _multaArchivo.leer(posicion);
        
        aux.setEliminado(true);
        _multaArchivo.guardar(aux, posicion);
        cout << "Registro eliminado correctamente."<< endl;
        
    }else{
        cout << "No se encontro la multa con ID " << idMulta << endl;
    }
}