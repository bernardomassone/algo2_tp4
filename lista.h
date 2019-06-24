#pragma once
#include <iostream>
#include <string>
#include "nodo_lista.h"

const int INICIO = 1;

class Lista{
  //Atributos
  private:
    Nodo_lista* primero;
    Nodo_lista* ultimo;
    int tam;

  //Métodos
  public:
    //Constructor
    Lista();

    //Lista está vacía
    //Post: Método que devuelve un dato booleano verificando si la lista está vacía o no
    bool esta_vacia();

    //Obtener primer elemento
    //Post: Método que devuelve un puntero a la direccion del primer nodo de la lista
    Nodo_lista* obtener_primero();

    //Obtener ultimo elemento
    //Post: Método que devuelve un puntero a la direccion del ultimo nodo de la lista
    Nodo_lista* obtener_ultimo();

    //Obtener tamaño
    //Post: Método que devuelve el valor del atributo tam de la clase
    int obtener_tam();

    //Agregar dato
    //Descripción: Procedimiento que recibe un nombre de un cliente y lo agrega a la lista
    //Pre: Procedimiento que recibe una cadena de caracteres
    //Post: Agrega los datos de la cadena de caracteres al atributo nombre de la clase
    void agregar_nombre(std::string nombre);

    //Obtener dato
    //Descripción: Método que recibe un valor positivo representativo a una posición menor o igual que el tamaño de la lista,
    //devolviendo el nombre del cliente alojado en dicha posición
    //Pre: Método que recibe un entero representativo a una posición de la lista (0 < posicion <= tam)
    //Post: Devuelve la cadena de caracteres que contiene el nombre del cliente alojado en el nodo de dicha posición recibida
    std::string obtener_nombre(int posicion);

    //Eliminar el primer nodo de la lista
    //Descripción: Procedimiento que elimina el primer nodo de la lista
    //Post: El primer nodo es eliminado de la lista
    void eliminar_primero();

    //Copiar lista
    //Descripcion: Procedimiento que recibe dos direcciones de memoria de listas y guarda los elementos de la segunda lista recibida
    //en la primera
    //Pre: Procedimiento que recibe dos direcciones de memoria de listas
    //Post: Guarda los elementos de la segunda lista recibida en la primera
    void copiar(Lista* copia, Lista* original);

    //Imprimir lista
    //Post: Método que imprime por pantalla las cadenas de caracteres con los nombres de los clientes alojados en la lista
    void imprimir_lista();

    //Destructor
    ~Lista();
};
