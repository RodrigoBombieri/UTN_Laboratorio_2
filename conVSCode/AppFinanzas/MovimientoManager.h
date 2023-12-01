#pragma once
#include "Movimiento.h"
#include "MovimientoArchivos.h"


class MovimientoManager{
    public:
        void cargarMovimiento();
        void editar();
        void eliminar();
        void listarxID();
        void listarTodos();
        void mostrarCantidadRegistros();
        void mostrarMovimiento(Movimiento reg);
        
    private:
        // creamos una instancia de la clase MovimientoArchivos para poder usar sus metodos
        // y se le manda por parametro el nombre del archivo que va a manejar
        MovimientoArchivos _archivo = MovimientoArchivos("movimientos.dat");
};