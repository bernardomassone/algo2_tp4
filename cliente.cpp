#include "cliente.h"

Cliente::Cliente(){}

Cliente::Cliente(unsigned long telefono){
  this->telefono = telefono;
}

void Cliente::asignar_telefono(unsigned long telefono){
  this->telefono = telefono;
}

unsigned long Cliente::obtener_telefono(){
  return telefono;
}

void Cliente::mostrar(){}

void Cliente::aplicar_descuento(float &precio){}
