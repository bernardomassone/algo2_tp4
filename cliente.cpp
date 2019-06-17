#include "cliente.h"

Cliente::Cliente(){
  telefono = 0;
}

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

Cliente::~Cliente(){}
