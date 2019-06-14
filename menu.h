#ifndef _MENU_H_
#define _MENU_H_

#include <iostream>
#include <fstream>
#include <string>

const std::string RUTA = "clientes.txt";

class Menu{
  //Atributos
  private:

  //Métodos
  public:
    Menu();

    void cargar_clientes(/*Arbol* clientes*/);

    void separar_linea(std::string linea);
};

#endif
