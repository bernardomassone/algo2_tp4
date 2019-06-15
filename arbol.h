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

        void insertar();

};