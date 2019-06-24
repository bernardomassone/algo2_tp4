#pragma once
#include <iostream>
#include <string>
#include "cliente.h"
#include "lista.h"

class Familia: public Cliente{
  //Atributos
  private:
    Lista* integrantes;

  //Métodos
  public:
    //Constructor
    Familia();

    //Constructor con parámetros
    Familia(unsigned long telefono, Lista* integrantes);

    //Asignar integrantes
    //Descripción: Procedimiento que recibe una dirección de memoria de una lista y la asigna a la variable integrantes de la clase
    //Pre: Procedimiento que recibe una dirección de memoria a un objeto de clase Lista
    //Post: Asigna la dirección recibida a la variable integrantes de la clase
    void asignar_integrantes(Lista* integrantes);

    //Obtener integrantes
    //Post: Método que devuelve la dirección de memoria del objeto clase Lista que contiene los integrantes de la familia
    Lista* obtener_integrantes();

    //Mostrar
    //Post: Procedimiento que muestra los nombres de los integrantes de la familia
    void mostrar();

    //Aplicar descuento
    //Descripción: Método que recibe el precio de un producto y devuleve otro con el descuento aplicado
    //Pre: Método que recibe un número de tipo coma flotante
    //Post: Devuelve por referencia el valor del precio con su respectivo descuento
    void aplicar_descuento(float &precio);

    //Clonar familia
    //Post: Método que devuelve la dirección de memoria de una copia del objeto de la clase
    Cliente* clonar();

    //Destructor
	  ~Familia();
};
