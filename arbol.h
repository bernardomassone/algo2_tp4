#pragma once
#include <iostream>
#include "nodo_arbol.h"

class Arbol{
    //Atributos
    private:
        Nodo_arbol* raiz;
    public:
        /* Descripcion: Instancia un arbol vacio (raiz == nullptr)
         * Precodicion: NaN 
         * Postcondicion: Arbol vacio creado
         */
        Arbol();
        /* Descripcion: Realiza un recorrido inorder del arbol (imprime de menor a mayor)
         * Precodicion: Recibe un nodo (no necesariamente != nullptr)
         * Postcondicion: Imprime todos los datos (telefonos e individuos/familias) en orden
         */
        void recorrido_inorder(Nodo_arbol* nodo);
        
        /* Descripcion: Llama a la funcion recursiva buscar_cliente y si se encuentra muestra el cliente buscado
         * Precodicion: Recibe un numero de telefono
         * Postcondicion: Muestra el cliente buscado en caso de existir en el arbol
         */
        void call_buscar_cliente(unsigned long telefono);

        /* Descripcion: Busca el cliente en el arbol a partir de un nodo y el telefono
         * Precodicion: Recibe un puntero a nodo y un numero de telefono
         * Postcondicion: En caso de existir el cliente en el arbol, devuelve un puntero al nodo contenedor
         *                else devuelve nullptr
         */
        Nodo_arbol* buscar_cliente(Nodo_arbol* nodo, unsigned long telefono);

        /* Descripcion: Inserta un nuevo cliente al arbol (y el numero de telefono), ordenado segun propiedad de abb
         * Precodicion: Recibe un puntero a cliente no null
         * Postcondicion: El cliente se inserta en la posicion correcta 
         */
        void insertar_cliente(Cliente* nuevo_cliente);

        /* Descripcion: Elimina un cliente por su numero de telefono
         * Precodicion: Recibe un numero de telefono
         * Postcondicion: Si se encuentra, se elimina el cliente, reacomodando el arbol tal que siga cumpliendo las
         *                propiedades de abb. En caso contrario se informa por pantalla que el cliente no se encuentra en el mismo
         */
        void eliminar_cliente(unsigned long telefono);

        /* Descripcion: Destructor del arbol
         * Precodicion: NaN
         * Postcondicion: El arbol se elimina completamente
         */
        ~Arbol();
};