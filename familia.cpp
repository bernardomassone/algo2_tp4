#include "familia.h"

Familia::Familia(): Cliente(){}

Familia::Familia(unsigned long telefono, Lista* integrantes): Cliente(telefono){
  this->integrantes = integrantes;
}

void Familia::asignar_integrantes(Lista* integrantes){
  this->integrantes = integrantes;
}

Lista* Familia::obtener_integrantes(){
  return integrantes;
}

void Familia::mostrar(){
  std::cout << obtener_telefono() << " ";
  integrantes->imprimir_lista();
}

void Familia::aplicar_descuento(float &precio){
  precio*=0.65;
}
