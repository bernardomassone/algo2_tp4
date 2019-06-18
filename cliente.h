#pragma once
#include <iostream>

class Cliente{
  //Atributos
  private:
    unsigned long telefono;

  //Métodos
  public:
    //Constructor
    Cliente();

    virtual Cliente* clonar() = 0;

    //Constructor con parámetros
    Cliente(unsigned long telefono);

    //Asignar teléfono
    //Descripción: Procedimiento que recibe un número de teléfono y lo asigna al del atributo telefono de la clase
    //Pre: Procedimiento que recibe número estrictamente positivo
    //Post: Asigna el valor recibido al del atributo telefono de la clase
    void asignar_telefono(unsigned long telefono);

    //Obtener telefono
    //Post: Método que devuelve el valor que contiene el atributo telefono de la clase
    unsigned long obtener_telefono();

    //Mostrar telefono del cliente
    //Post: Procedimiento que imprime por pantalla el número de teléfono del cliente
    virtual void mostrar();

    //Aplicar descuento
    //Descripción: Método que recibe el precio de un producto y devuleve otro con el descuento aplicado
    //Pre: Método que recibe un número de tipo coma flotante
    //Post: Devuleve por referencia el valor del precio con su respectivo descuento
    virtual void aplicar_descuento(float &precio);

	virtual ~Cliente();
};
