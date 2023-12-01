#pragma once
#include "Movimiento.h"

void mostrarMenu();

Movimiento cargarMovimiento();

bool guardarMovimiento(Movimiento reg);

void mostrarMovimiento(Movimiento reg);

bool listarMovimientos(Movimiento reg);

void verSaldo(Movimiento reg);