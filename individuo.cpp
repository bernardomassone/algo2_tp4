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
  std::cout << obtener_telefono() << " " << nombre <<std::endl;
}

void Individuo::aplicar_descuento(float &precio){
  precio*=0.9;
}

Individuo::~Individuo(){}
