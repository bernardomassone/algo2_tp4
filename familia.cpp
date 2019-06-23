#include "familia.h"

Familia::Familia(): Cliente(){
  integrantes = nullptr;
}

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
  std::cout << "----------------------------------------------------" << std::endl;
  std::cout << "Telefono: ";
  std::cout << obtener_telefono() << std::endl;
  std::cout << "Clientes: ";
  integrantes->imprimir_lista();
}

void Familia::aplicar_descuento(float &precio){
  precio*=0.65;
}

Familia::~Familia(){
	delete integrantes;
}

Cliente* Familia::clonar(){
  Lista* nueva = new Lista;
  nueva->copiar(nueva, integrantes);
  return new Familia(this->obtener_telefono(), nueva);
}
