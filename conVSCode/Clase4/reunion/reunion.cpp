#include "reunion.h"

FechaHorario Reunion::getFechaHora(){
    return _fechaHora;
}

std::string Reunion::getLugar(){
    return _lugar;
}

std::string Reunion::getTema(){
    return _tema;
}

int Reunion::getDuracion(){
    return _duracion;
}

int Reunion::getCantidadIntegrantes(){
    return _cantidadIntegrantes;
}

Persona Reunion::getIntegrante(int indice){
    if(indice >= 0 && indice <= _cantidadIntegrantes)
        return _integrantes[indice];
    else{    
        return _integrantes[0];
    }
}

std::string Reunion::toString(){
    std::string aux;
    aux = _fechaHora.toString();
    aux += ", " + getLugar(); 
    aux += ", " + getTema();
    aux += ", " + std::to_string(getDuracion()) + " minutos";
    //TODO: Conctenar los integrantes

    for(int x=0; x <= _cantidadIntegrantes-1; x++){
        aux += ", " +  _integrantes[x].getApellidoYNombre();
    }
    return aux;
}

void Reunion::setFechaHorario(FechaHorario fechaHora){
    _fechaHora = fechaHora;
}
void Reunion::setLugar(std::string lugar){
    _lugar = lugar;
}
void Reunion::setTema(std::string tema){
    _tema = tema;
}
void Reunion::setDuracion(int duracion){
    _duracion = duracion;
}
void Reunion::setCantidadIntegrantes(int cantidadIntegrantes){
    _cantidadIntegrantes = cantidadIntegrantes;
}
// le asigna un integrante a la reunion en la posicion indice
void Reunion::setIntegrante(int indice, Persona integrante){
    _integrantes[indice] = integrante;
}

        // constructor donde pedimos la cantidad dinamica de integrantes
Reunion::Reunion(int cantidadIntegrantes){
    if(cantidadIntegrantes > 0){
        _integrantes = nullptr;

        _integrantes = new Persona[cantidadIntegrantes];
        // si no se pudo pedir memoria, la cantidad de integrantes sera cero
        // si se pudo pedir memoria, CREA EL VECTOR y la cantidad de integrantes sera la que pedimos
        if(_integrantes == nullptr){
            _cantidadIntegrantes = 0;
            
        }else{
            _cantidadIntegrantes = cantidadIntegrantes;
        }
    }
    else{
        // si ingresa un numero negativo, la cantidad de integrantes sera cero
        _cantidadIntegrantes = 0;
    }

    _duracion = 0;
    _lugar = "";
    _tema = "";

}

Reunion::~Reunion(){
    // si el vector de integrantes no es nulo, liberamos la memoria
    if(_cantidadIntegrantes > 0){
        delete[] _integrantes;
    }
}