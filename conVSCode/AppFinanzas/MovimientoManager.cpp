#include "MovimientoManager.h"
#include <iostream>
using namespace std;

void MovimientoManager::cargarMovimiento(){
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
    cin >> dia >> mes >> anio ;
    cout << endl;
   
    Movimiento reg;

    reg.setId(id);
    reg.setFecha(Fecha(dia, mes, anio));
    reg.setDescripcion(descripcion);
    reg.setIdTipoMovimiento(tipoMovimiento);
    reg.setReferencia(referencia);
    reg.setImporte(importe);

    bool ok = _archivo.guardarMovimiento(reg);
    if(ok){
        cout << "El movimiento se registro correctamente.";
    }
    else{
        cout << "El movimiento no se registro.";
    }
    cout << endl;
}

void MovimientoManager::editar(){
    int idMovimiento, posicion;
    cout << "Ingrese el ID: "<<endl;
    cin >> idMovimiento;    
    posicion = _archivo.buscar(idMovimiento);
    if(posicion>=0){
        Movimiento aux = _archivo.leerArchivos(posicion);
        cout << "Registro a modificar: "<< endl;
        mostrarMovimiento(aux);
        
        float nuevoImporte;
        cout << "Ingrese el nuevo importe: $ "<< endl;
        cin >> nuevoImporte;      
        aux.setImporte(nuevoImporte);
        _archivo.guardarMovimiento(aux, posicion);

        cout << "Registro modificado correctamente."<<endl;
    }
    else{
        cout << "No se encontro el movimiento con ID: " << idMovimiento << endl;
    }
}

void MovimientoManager::eliminar(){
     int idMovimiento, posicion;
    cout << "Ingrese el ID: "<<endl;
    cin >> idMovimiento;    
    posicion = _archivo.buscar(idMovimiento);
    
    if(posicion>=0){
        Movimiento aux = _archivo.leerArchivos(posicion);
        cout << "Registro a eliminar: "<< endl;
        mostrarMovimiento(aux);
        
        char confirmacion;
        cout << endl << "¿Confirmar? (S/N): "<<endl;
        cin >> confirmacion;

        if(toupper(confirmacion) == 'S'){
            aux.setEliminado(true);
            _archivo.guardarMovimiento(aux, posicion);
            cout << "Registro eliminado correctamente."<<endl;
        }
        else{
            cout << "Tu registro esta a salvo."<<endl;
        }
    }
    else{
        cout << "No se encontro el movimiento con ID: " << idMovimiento << endl;
    }
}

void MovimientoManager::listarxID(){
    int idMovimiento, posicion;
    cout << "Ingrese el ID: "<<endl;
    cin >> idMovimiento;
    
    posicion = _archivo.buscar(idMovimiento);
    if(posicion>=0){
        Movimiento aux = _archivo.leerArchivos(posicion);
        mostrarMovimiento(aux);
    }
    else{
        cout << "No se encontro el movimiento con ID: " << idMovimiento << endl;
    }
}

void MovimientoManager::listarTodos(){
    int cantidadRegistros = _archivo.contarRegistros();
    for (int i=0; i<cantidadRegistros; i++){
        Movimiento aux = _archivo.leerArchivos(i);
        mostrarMovimiento(aux);
        cout << "+++++++++++++++++++++++++++++++++" << endl;
    }
}

void MovimientoManager::mostrarMovimiento(Movimiento reg){
    if(reg.getEliminado()==false){
        cout << endl;
        cout << "ID: " << reg.getId() << endl;
        cout << "Descripcion: " << reg.getDescripcion() << endl;
        cout << "Tipo de movimiento: " << reg.getTipoMovimiento() << endl;
        cout << "Importe: $ " << reg.getImporte() << endl;
        cout << "Referencia: " << reg.getReferencia() << endl;
        cout << "Fecha: " << reg.getFecha().toString() << endl;
        cout << "Eliminado: " << (reg.getEliminado()?"Si":"No") <<endl;
        cout << endl;
    } 
}

void MovimientoManager::mostrarCantidadRegistros(){
    int cantidadRegistros = _archivo.contarRegistros();
    cout << "Cantidad de Registros: " << cantidadRegistros << endl;
}







