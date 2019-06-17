#include "nodo_arbol.h"

Nodo_arbol::Nodo_arbol(){
  hijo_izquierda = nullptr;
  hijo_derecha = nullptr;
  telefono = 0;
  cliente = nullptr;
}

Nodo_arbol::Nodo_arbol(unsigned int telefono, Cliente* cliente){
  hijo_izquierda = nullptr;
  hijo_derecha = nullptr;
  this->telefono = telefono;
  this->cliente = cliente;
}

void Nodo_arbol::asignar_hijo_izquierda(Nodo_arbol* hijo_izquierda){
  this->hijo_izquierda = hijo_izquierda;
}

Nodo_arbol* Nodo_arbol::obtener_hijo_izquierda(){
  return hijo_izquierda;
}

void Nodo_arbol::asignar_hijo_derecha(Nodo_arbol* hijo_derecha){
  this->hijo_derecha = hijo_derecha;
}

Nodo_arbol* Nodo_arbol::obtener_hijo_derecha(){
  return hijo_derecha;
}

void Nodo_arbol::asignar_telefono(unsigned int telefono){
  this->telefono = telefono;
}

unsigned int Nodo_arbol::obtener_telefono(){
  return telefono;
}

void Nodo_arbol::asignar_cliente(Cliente* cliente) {
	this->cliente = cliente;
}

Cliente* Nodo_arbol::obtener_cliente() {
	return cliente;
}

Nodo_arbol::~Nodo_arbol(){
	delete cliente;
}
