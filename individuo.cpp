#include "individuo.h"

Individuo::Individuo(): Cliente(){}

Individuo::Individuo(unsigned long telefono, std::string nombre): Cliente(telefono){
  this->nombre = nombre;
}

void Individuo::asignar_nombre(std::string nombre){
  this->nombre = nombre;
}

std::string Individuo::obtener_nombre(){
  return nombre;
}

void Individuo::mostrar(){
  std::cout << "----------------------------------------------------" << std::endl;
  std::cout << "Telefono: " << obtener_telefono() << std::endl;
  std::cout << "Cliente: " << nombre << std::endl;
}

void Individuo::aplicar_descuento(float &precio){
  precio*=0.9;
}

Cliente* Individuo::clonar(){
  return new Individuo(*this);
}

Individuo::~Individuo(){

}
