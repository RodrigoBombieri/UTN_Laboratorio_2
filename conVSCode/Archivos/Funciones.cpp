#include <iostream>
using namespace std;
#include "Funciones.h"


void mostrarMenu(){
    cout << "************************************" << endl;
    cout << "***************MENÚ*****************" << endl;
    cout << "1 - Cargar Movimiento." << endl;
    cout << "2 - Listar Movimientos." << endl;
    cout << "3 - Ver Saldo." << endl;
    cout << "************************************" << endl;
    cout << "0 - SALIR" << endl;
}


void mostrarMovimiento(Movimiento reg){
    cout << "ID: " << reg.getId() << endl;
    cout << "Descripcion: " << reg.getDescripcion() << endl;
    cout << "Tipo de movimiento: " << reg.getTipoMovimiento() << endl;
    cout << "Importe: $ " << reg.getImporte() << endl;
    cout << "Referencia: " << reg.getReferencia() << endl;
    cout << "Fecha: " << reg.getFecha().toString() << endl;
}

Movimiento cargarMovimiento(){
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

/// guarda un registro de movimiento en el archivo
bool guardarMovimiento(Movimiento reg){
    bool escribio;
    FILE *p = fopen("movimientos.dat", "ab"); /// añadir un nuevo movimiento al archivo
    if(p == NULL){
        cout << "No se pudo abrir el archivo" << endl;
        return false;
    }

    escribio=fwrite(&reg, sizeof(Movimiento), 1, p); /// escribir el movimiento en el archivo, 
    fclose(p);
    return escribio;
}

/// Leer un movimiento del archivo
bool listarMovimientos(Movimiento reg){
    FILE *p = fopen("movimientos.dat", "rb"); /// abrir el archivo en modo lectura
    if(p == NULL){
        cout << "No se pudo abrir el archivo" << endl;
        return false;
    }
    while(fread(&reg, sizeof(Movimiento), 1, p)==1){ /// el fread() tiene un valor de retorno que es la cantidad de elementos leidos
        mostrarMovimiento(reg);
        cout << endl;
    } /// leer el primer movimiento del archivo
    fclose(p);
    return true;
}

void verSaldo(Movimiento reg){
    FILE *p =fopen("movimientos.dat", "rb");
    if(p==NULL){
        cout << "No se pudo abrir el archivo"<<endl;
        exit(1);
    }
    float saldo;

    while(fread(&reg, sizeof(Movimiento),1,p)==1){
        if(reg.getIdTipoMovimiento()==1){
            saldo+=reg.getImporte();
        }else if(reg.getIdTipoMovimiento()==2){
            saldo-=reg.getImporte();
        }
    }
    
    cout << "El saldo es: $ " << saldo << endl;
    cout << reg.getFecha().toString() <<endl;

}
