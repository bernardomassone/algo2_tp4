#pragma once
#include <iostream>
#include <string>
#include "cliente.h"

class Individuo: public Cliente{
  //Atributos
  private:
    std::string nombre;

  //Métodos
  public:
    //Constructor
    Individuo();

    //Constructor con parámetros
    Individuo(unsigned long telefono, std::string nombre);

    //Asignar nombre
    //Descripción: Procedimiento que recibe un nombre y lo asigna al atributo nombre de la clase
    //Pre: Procedimiento que recibe una cadena de caracteres
    //Post: Asigna la cadena recibida al atributo nombre de la clase
    void asignar_nombre(std::string nombre);

    //Obtener nombre
    //Post: Método que devuelve la cadena de caracteres que contiene el nombre del individuo
    std::string obtener_nombre();

    //Mostrar
    //Post: Procedimiento que imprime por pantalla el nombre del individuo
    void mostrar();

    //Aplicar descuento
    //Descripción: Método que recibe el precio de un producto y devuleve otro con el descuento aplicado
    //Pre: Método que recibe un número de tipo coma flotante
    //Post: Devuleve por referencia el valor del precio con su respectivo descuento
    void aplicar_descuento(float &precio);

    //Clonar individuo
    //Post: Método que devuelve la dirección de memoria de una copia del objeto de la clase
    Cliente* clonar();

    //Destructor
	  ~Individuo();
};
