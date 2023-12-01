#include <iostream>
#include "fechaHorario.h"
#include "persona.h"
#include "reunion.h"
#include <vector> // clase vector de la biblioteca estandar
using namespace std;

int main() {
    FechaHorario ahora, fechayhora;
    Reunion reunion(7);
    Persona yo("Bombieri", "Rodrigo");
    Persona elon("Musk", "Elon");
    Persona gentes[7];

    gentes[0] = Persona("Gates", "Bill");
    gentes[1] = Persona("Jobs", "Steve");
    gentes[2] = Persona("Torvalds", "Linus");
    gentes[3] = Persona("Stallman", "Richard");
    gentes[4] = Persona("Wozniak", "Steve");
    gentes[5] = Persona("Bombieri", "Rodrigo");
    gentes[6] = Persona("Stroustrup", "Bjarne");

    for(int x=0; x < 7; x++){
        reunion.setIntegrante(x, gentes[x]);
    }

    /*
    fechayhora.setFecha(1, 10, 2023);
    fechayhora.setHorario(0, 0, 19);
    

    reunion.setDuracion(90);
    reunion.setLugar("Buenos Aires");
    reunion.setTema("Programacion en C++");
    reunion.setFechaHorario(fechayhora);
    reunion.setIntegrante(0, yo);
    reunion.setIntegrante(1, elon);
    */

   
    cout << reunion.getIntegrante(0).getApellidoYNombre() << endl;
    cout << reunion.toString() << endl;
    /*
    Persona yo;
    Persona elon("Musk", "Elon");
    Persona nadie;

    cout << nadie.getApellidoYNombre() << endl; // devuelve "Nombre no valido"
    cout << elon.getApellidoYNombre() << endl; // devuelve "Musk, Elon"
    
    yo.setApellidos("Bombieri");
    yo.setNombres("Rodrigo");

    cout << yo.getApellidoYNombre() << endl; // devuelve "Bombieri, Rodrigo"
    cout << ahora.toString() << endl;*/


    // Ejemplo de FOREACH ----------------->
    // p es una variable que vive solo en el for
    for(Persona p:gentes){
        cout << p.getApellidoYNombre() << endl;
    }
    cout << endl;

    /// ejemplo con vector de enteros
    int vec[5]={1,2,3,4,5};
    for(int numero:vec){
        cout << numero << endl;
    }

    // Ejemplo de VECTOR DINAMICO con biblioteca estandar ----------------->
    // vecPersonas es un vector de personas que tiene la capacidad de añadir elementos de forma dinamica
    std::vector <Persona> vecPersonas;
    // push_back permite agregar una persona
    vecPersonas.push_back(gentes[0]);
    vecPersonas.push_back(gentes[1]);

    cout << endl;
    // muestra solo a los dos primeros
    for(Persona p:vecPersonas){
        cout << p.getApellidoYNombre() << endl;
    }

    return 0;
}