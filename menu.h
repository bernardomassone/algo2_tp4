#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "arbol.h"
#include "individuo.h"
#include "familia.h"

const std::string RUTA = "clientes.txt";

class Menu{
  //Atributos
  private:

  //Métodos
  public:
    Menu();

    void cargar_clientes(Arbol* clientes);

  private:
    void cargar_y_separar_linea(std::string linea, Arbol* clientes);
};
