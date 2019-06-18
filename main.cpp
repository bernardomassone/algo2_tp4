#include <iostream>
#include "arbol.h"
#include "menu.h"
using namespace std;

int main(){
  Arbol clientes;
  Menu menu;

  menu.cargar_clientes(&clientes);
  clientes.recorrido_inorder();

  return 0;
}
