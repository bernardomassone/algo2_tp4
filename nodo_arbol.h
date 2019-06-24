#pragma once
#include <iostream>
#include "cliente.h"

class Nodo_arbol{
  //Atributos
  private:
    Nodo_arbol* hijo_izquierda;
    Nodo_arbol* hijo_derecha;
    unsigned int telefono;
    Cliente* cliente;

  //Métodos
  public:
    //Constructor
    Nodo_arbol();

    //Constructor con parámetros
    Nodo_arbol(unsigned long telefono, Cliente* cliente);

    //Asignar hijo de la izquierda
    //Descripción: Procedimiento que recibe una dirección de memoria del hijo que irá a la izquierda del nodo actual y la asigna al
    //             atributo hijo_izquierda de la clase
    //Pre: Procedimiento que recibe una dirección de memoria de un nodo
    //Post: Asigna la dirección de memoria recibida al atributo hijo_izquierda de la clase
    void asignar_hijo_izquierda(Nodo_arbol* hijo_izquierda);

    //Obtener hijo de la izquierda
    //Post: Método que devuelve la dirección de memoria del hijo de la izquierda del nodo actual
    Nodo_arbol* obtener_hijo_izquierda();

    //Asignar hijo de la derecha
    //Descripción: Procedimiento que recibe una dirección de memoria del hijo que irá a la derecha del nodo actual y la asigna al
    //             atributo hijo_derecha de la clase
    //Pre: Procedimiento que recibe una dirección de memoria de un nodo
    //Post: Asigna la dirección de memoria recibida al atributo hijo_derecha de la clase
    void asignar_hijo_derecha(Nodo_arbol* hijo_derecha);

    //Obtener hijo de la derecha
    //Post: Método que devuelve la dirección de memoria del hijo de la derecha del nodo actual
    Nodo_arbol* obtener_hijo_derecha();

    //Asignar número de teléfono
    //Descripción: Procedimiento que recibe un número de teléfono de un cliente y lo asigna al atributo télefono de la clase
    //Pre: Procedimiento que recibe un entero estrictamente positivo
    //Post: Asigna el valor recibido al atributo teléfono de la clase
    void asignar_telefono(unsigned long telefono);

    //Obtener número de teléfono
    //Post: Método que devuelve el valor del atributo telefono de la clase
    unsigned long obtener_telefono();

    //Asignar cliente
	  //Descripcion: Recibe una dirección de memoria de un cliente y lo asigna al atributo cliente de la clase
	  //Pre: Procedimiento que recibe una dirección de memoria (distinta a nullptr) de un cliente
	  //Post: Asigna la dirección recibida al atributo cliente de la clase
    void asignar_cliente(Cliente* cliente);

	  //Obtener cliente
	  //Postcondicion: Método que devuelve la dirección de memoria del cliente de la clase
    Cliente* obtener_cliente();

    //Destructor
	  ~Nodo_arbol();
};
