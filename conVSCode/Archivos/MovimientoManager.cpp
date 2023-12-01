#include "MovimientoManager.h"
#include <iostream>
using namespace std;
#include "Movimiento.h"

void MovimientoManager::Cargar(){
     int id, dia, mes, anio, tipoMovimiento;
    float importe;
    string descripcion, referencia;
    /// HACER VALIDACIONES
    cout << "Ingrese el ID: ";

    cin >> id;
    cout << "Ingrese la descripcion: ";
    cin.ignore();
    getline(cin, descripcion);
    cout << "Ingrese el tipo de movimiento (1: Ingreso, 2: Gasto): ";
    cin >> tipoMovimiento;
    cout << "Ingrese el importe: ";
    cin >> importe;
    cout << "Ingrese la referencia: ";
    cin.ignore();
    getline(cin, referencia);
    cout << "Ingrese la fecha: " << endl;
    cin >> dia;
    cin >> mes;
    cin >> anio;

    Movimiento reg;

    reg.setId(id);
    reg.setFecha(Fecha(dia, mes, anio));
    reg.setDescripcion(descripcion);
    reg.setIdTipoMovimiento(tipoMovimiento);
    reg.setReferencia(referencia);
    reg.setImporte(importe);

    return reg;
}


void MovimientoManager::Mostrar(Movimiento reg){
    cout << "ID: " << reg.getId() << endl;
    cout << "Descripcion: " << reg.getDescripcion() << endl;
    cout << "Tipo de movimiento: " << reg.getTipoMovimiento() << endl;
    cout << "Importe: $ " << reg.getImporte() << endl;
    cout << "Referencia: " << reg.getReferencia() << endl;
    cout << "Fecha: " << reg.getFecha().toString() << endl;
}