#include <iostream>
#include "arbol.h"
#include "menu.h"
using namespace std;

int main(){
  Arbol clientes;
  Menu menu;

  menu.inicializar(menu,&clientes);
 
  return 0;
}
