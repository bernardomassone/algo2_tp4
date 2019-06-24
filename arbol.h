#pragma once
#include <iostream>
#include "nodo_arbol.h"

class Arbol{
  //Atributos
  private:
    Nodo_arbol* raiz;

	//Métodos
  public:
    //Constructor
    Arbol();

    //Obtener raiz
    //Post: Método que devuelve la dirección de memoria del nodo raiz del árbol
    Nodo_arbol* obtener_raiz();

    //Reccorrido inorder
    //Post: Procedimiento que recorre el árbol inorder e imprime la información de cada nodo
		void recorrido_inorder();

    //Buscar cliente
    //Descripción: Procedimiento que recibe un número de teléfono de un cliente, lo busca en el árbol e imprime por pantalla sus datos
    //Pre: Procedimiento que recibe un entero estrictamente positivo
    //Post: Busca e imprime por pantalla los datos del cliente representativo al entero recibido
    void buscar_cliente(unsigned long telefono);

    //Insertar cliente
    //Descripción: Procedimiento que recibe la dirección de memoria de unv cliente y lo inserta ordenadamente en el árbol
    //Pre: Procedimiento que recibe la dirección de memoria de un objeto de clase Cliente
    //Post: Inserta ordenadamente al cliente recibido en el árbol
    void insertar_cliente(Cliente* nuevo_cliente);

    //Obtener cliente
    //Descripción: Método que recibe un número de teléfono y devuelve la dirección de memoria del cliente que posee ese número
    //Pre: Método que recibe un entero estrictamente positivo
    //Post: Devuelve la dirección de memoria del cliente representado por el entero recibido
    Nodo_arbol* obtener_cliente(unsigned long telefono);

    //Eliminar cliente
    //Descripción: Procedimiento que recibe un número de teléfono y elimina del árbol al cliente que posee dicho número
    //Pre: Procedimiento que recibe un entero estrictamente positivo
    //Post: Elimina del árbol al cliente que posee el entero recibido
		void eliminar_cliente(unsigned long telefono);

    //Destructor
    ~Arbol();

  private:
    //Reccorrido inorder (privado)
    //Descripción: Procedimiento que recibe una dirección de memoria de un nodo del árbol, recorre el árbol inorder e imprime la
    //información de cada nodo
    //Pre: Procedimiento que recibe una dirección de memoria de un nodo del árbol
    //Post: Recorre el árbol inorder e imprime la información de cada nodo
    void recorrido_inorder_private(Nodo_arbol* nodo);

    //Buscar cliente (privado)
    //Descripción: Procedimiento que recibe una dirección de memoria de un nodo del árbol y un número de teléfono de un cliente,
    //lo busca en el árbol e imprime por pantalla sus datos
    //Pre: Procedimiento que recibe una dirección de memoria de un nodo del árbol y un entero estrictamente positivo
    //Post: Busca e imprime por pantalla los datos del cliente representativo al entero recibido
    Nodo_arbol* buscar_cliente_private(Nodo_arbol* nodo, unsigned long telefono);

    //Eliminar cliente (privado)
    //Descripción: Procedimiento que recibe una dirección de memoria de un nodo del árbol y un número de teléfono, y elimina del
    //árbol al cliente que posee dicho número
    //Pre: Procedimiento que recibe una dirección de memoria de un nodo del árbol y un entero estrictamente positivo
    //Post: Elimina del árbol al cliente que posee el entero recibido
		Nodo_arbol* eliminar_cliente_private(Nodo_arbol* nodo, unsigned long telefono);
};
