#include <iostream>
#include "funciones.h"
#include <cstring>

using namespace std;

/// CLASE: es una plantilla o molde para la creación de objetos de datos según un modelo predefinido. (bidon, vaso)
/// OBJETO: es una abstraccion de un objeto del mundo real, definiendo sus caracteristicas y que acciones puede realizar.
/// ABSTRACCIÓN: es un proceso mental que consiste en aislar un objeto de su contexto 
/// o del resto de los objetos que lo acompañan para poder estudiarlo o manipularlo mejor.
/// ATRIBUTOS: son las características que tiene un objeto.(son infinitas, pero se definen las que son necesarias para el problema )
/// MÉTODOS: son las acciones que puede realizar un objeto.


/// ESTADO: son los valores que tienen las características del objeto. (por ejemplo la edad de una persona, o la capacidad del bidon)
/// COMPORTAMIENTO: es la capacidad de un objeto de realizar acciones.(cargar bidon, servir batido)
/// IDENTIDAD: es la propiedad de un objeto que lo distingue de los demás objetos. (sabor banana, anana, sandia)

/// ENCAPSULAMIENTO: es la capacidad de ocultar el estado y comportamiento de un objeto,
///  permitiendo que solo se pueda acceder a él mediante un interfaz definido para dicho objeto.
/// (por ejemplo, el bidon tiene una capacidad de 20 litros, pero no es necesario que el usuario sepa que tiene 20 litros, solo que puede cargar el bidon)
/// Modificadores de acceso:
/// ATRIBUTOS PUBLICOS: son los atributos que pueden ser accedidos desde cualquier parte del programa. (por ejemplo, la capacidad del bidon)
/// ATRIBUTOS PRIVADOS: son los atributos que solo pueden ser accedidos desde la misma clase. (por ejemplo, el sabor del batido)
/// Esto sirve para poder controlar y/o validar el acceso a los atributos de un objeto.


/// POLIMORFISMO: es la capacidad de un objeto de comportarse de diferentes formas dependiendo del contexto.

/// HERENCIA: es la capacidad de un objeto de heredar las características y comportamientos de otro objeto.

/// CONSTRUCTOR: es un método especial que se ejecuta cuando se crea un objeto de una clase, tiene el mismo nombre de la clase

class Vaso{
    private:
        float capacidad;
    public:
        Vaso(float cap){
            capacidad = cap;  
        }
            
        float getCapacidad(){
            return capacidad;
        }
};

class Bidon{
    //Atributos o propiedades, aquí solamente se DECLARAN
    private:
        float capacidadMaxima;
        float capacidadActual;
        string sabor;
    /// Cuando creo el objeto, el constructor pone en cero la capacidad y el sabor. (constructor por defecto)
    
    //Metodos (generalmente son verbos, acciones), aquí se DEFINE su comportamiento
    public:
        /// @brief Constructor de la clase Bidon
        /// @param cap 
        /// hago una validación para que la capacidad no sea menor a 0
        void setCapacidadMaxima(float cap){
            if(cap >= 0)
                capacidadMaxima = cap;
            else{
                capacidadMaxima = 0;
                cout << "La capacidad debe ser mayor a 0" << endl;
            }
        }
        
        public:
            Bidon(){
                capacidadMaxima = 0;
                capacidadActual = 0;
                sabor = "Sin Sabor";
            }
            /// Sobrecargar un método es crear un método con el mismo nombre pero con diferentes parámetros.
            Bidon(float cap, string sab){
                setCapacidadMaxima(cap);
                sabor = sab;
                capacidadActual = 0;
            }
        /// @brief Metodo que devuelve la capacidad del objeto bidon
        /// @return float
        float getCapacidad(){
            return capacidadActual;
        }

        string getSabor(){
            return sabor;
        }

        /// @brief Metodo que carga el bidon con la capacidad que se le pasa por parametro
        /// @param cap
        void cargarBidon(){
            capacidadActual = capacidadMaxima;
        }

        /// @brief Metodo que sirve un batido de la capacidad que se le pasa por parametro
        void servirBatido(Vaso vaso){
            capacidadActual -= vaso.getCapacidad();
        }
};


int main(){
    /// Creamos el objeto bidon1, bidon2, bidon3 de la clase Bidon.
    /// cada uno de esos objetos tiene estados distintos.
    /// se almacenan en diferentes espacios de memoria aunque compartan las características y comportamientos.
    /// bidon1, bidon2, bidon3 son INSTANCIAS de la clase Bidon.
    Bidon bidon1(20000, "Banana"), bidon2(35000, "Anana"), bidon3(44000, "Sandia");
    
    Vaso vVasos[3]={Vaso(150), Vaso(200), Vaso(300)};
    
    bidon1.cargarBidon();
    cout << bidon1.getSabor() << " - " << bidon1.getCapacidad() << endl;
    bidon1.servirBatido(vVasos[0]);
    bidon1.servirBatido(vVasos[1]);
    bidon1.servirBatido(vVasos[2]);
    cout << bidon1.getSabor() << " - " << bidon1.getCapacidad() << endl;

    bidon2.cargarBidon();
    cout << bidon2.getSabor() << " - " << bidon2.getCapacidad() << endl;
    bidon2.servirBatido(vVasos[1]);
    cout << bidon2.getSabor() << " - " << bidon2.getCapacidad() << endl;

    bidon3.cargarBidon();
    cout << bidon3.getSabor() << " - " << bidon3.getCapacidad() << endl;
    bidon3.servirBatido(vVasos[2]);
    cout << bidon3.getSabor() << " - " << bidon3.getCapacidad() << endl;
    


    
    return 0;
}