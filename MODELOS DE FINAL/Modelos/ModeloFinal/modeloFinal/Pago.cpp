#include <cstring>
#include <iostream>
using namespace std;
#include "Pago.h"

Pago::Pago() {
    setIdMulta(0);
    setFechaPago(Fecha());
    setIdFormaPago(0);
    setImportePago(0);
    setDetallePago("Vacio");
}

Pago::Pago(int idMulta, Fecha fechaPago, int idFormaPago, float importePago) {
    setIdMulta(idMulta);
    setFechaPago(fechaPago);
    setIdFormaPago(idFormaPago);
    setImportePago(importePago);
    setDetallePago("");
}

void Pago::setIdMulta(int idMulta) {
    _idMulta = idMulta;
}

int Pago::getIdMulta() const {
    return _idMulta;
}

void Pago::setFechaPago(const Fecha &fechaPago) {
    _fechaPago = fechaPago;
}

Fecha Pago::getFechaPago() const {
    return _fechaPago;
}

void Pago::setIdFormaPago(int idFormaPago) {
    _idFormaPago = idFormaPago;
}

int Pago::getIdFormaPago() const {
    return _idFormaPago;
}

void Pago::setImportePago(float importePago) {
    _importePago = importePago;
}

float Pago::getImportePago() const {
    return _importePago;
}

void Pago::setDetallePago(std::string detallePago) {
    strcpy(_detallePago, detallePago.c_str());
}

std::string Pago::getDetallePago() const {
    return _detallePago;
}






