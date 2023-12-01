#include <iostream>
using namespace std;
#include "PagoManager.h"

void PagoManager::Cargar(){
    int idMulta, idFormaPago, dia, mes, anio;
    float importePago;
    string detallePago; 
    
    cout << "Cargando Pago: " << endl;
    cout << "Ingrese el id de la multa: ";
    cin >> idMulta;
    cout << "Ingrese el id de la forma de pago: ";
    cin >> idFormaPago;
    cout << "Ingrese el importe del pago: ";
    cin >> importePago;
    float pagoDescuento = verificarDescuento(importePago);
    cout << "Ingrese la fecha del pago: " << endl;
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Anio: ";
    cin >> anio;
    cout << "Ingrese el detalle del pago: ";
    cin.ignore();
    getline(cin, detallePago); /// usamos getline para poder ingresar espacios en blanco
    cout << endl;

    Pago pago;

    pago.setIdMulta(idMulta);
    pago.setIdFormaPago(idFormaPago);
    pago.setImportePago(pagoDescuento);
    pago.setFechaPago(Fecha(dia, mes, anio));
    pago.setDetallePago(detallePago);

    bool ok = _pagoArchivo.guardarRegistro(pago);

    if(ok){
        cout << "Pago guardado correctamente" << endl;
    }else{
        cout << "Error al guardar el pago" << endl;
    }
    cout << endl;

}


void PagoManager::Listar(Pago pago){
    cout << "Listando Pagos: " << endl;
    cout << "Id de la multa: " << pago.getIdMulta() << endl;
    cout << "Id de la forma de pago: " << pago.getIdFormaPago() << endl;
    cout << "Importe del pago: " << pago.getImportePago() << endl;
    cout << "Fecha del pago: " << pago.getFechaPago().getDia() << "/" << pago.getFechaPago().getMes() << "/" << pago.getFechaPago().getAnio() << endl;
    cout << "Detalle del pago: " << pago.getDetallePago() << endl;
    cout << endl;
}


float PagoManager::verificarDescuento(float importePago) {
    Multa multa;
    Pago pago;
    if (pago.getFechaPago().getMes() == multa.getFechaMulta().getMes() && pago.getFechaPago().getAnio() == multa.getFechaMulta().getAnio()) {
        return importePago * 0.8;
    } else {
        return importePago;
    }
    multa.setPagada(true); /// cambiamos el estado de la multa a pagada
}
