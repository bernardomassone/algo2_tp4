#include "nodo_lista.h"

Nodo_lista::Nodo_lista(){
  nombre = VACIO;
  asignar_siguiente(NULL);
}

Nodo_lista::Nodo_lista(std::string nombre){
  this->nombre = nombre;
  asignar_siguiente(NULL);
}

void Nodo_lista::asignar_nombre(std::string nombre){
  this->nombre = nombre;
}

std::string Nodo_lista::obtener_nombre(){
  return nombre;
}

void Nodo_lista::asignar_siguiente(Nodo_lista* siguiente){
  this->siguiente = siguiente;
}

Nodo_lista* Nodo_lista::obtener_siguiente(){
  return siguiente;
}
