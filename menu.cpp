#include "menu.h"

Menu::Menu(){}

void Menu::cargar_clientes(/*Arbol* clientes*/){
  std::ifstream archivo_leer;
	archivo_leer.open(RUTA);
  std::string linea;

  if(archivo_leer.is_open()){
		while(!archivo_leer.eof()){
      getline(archivo_leer, linea);
      separar_linea(linea);
		}
	}else{
		std::cout << "- Error al abrir archivo -" << std::endl;
		return;
	}
	archivo_leer.close();
}

void Menu::separar_linea(std::string linea/*, Arbol* clientes*/){
  int cantidad_comas = 0;
  std::string miembro;
  bool termino = false;
  unsigned tam;

  //LEO TELEFONO
  unsigned pos = linea.find(',');
  cantidad_comas++;
  std::string telefono = linea.substr(0, pos);
  //ACA CREARIAMOS EL NODO ARBOL

  while(!termino){
    linea = linea.substr(pos + 1);
    pos = linea.find(',');
    tam = linea.length();

    if(pos < tam){
      cantidad_comas++;
      miembro = linea.substr(0, pos);
      //ACA CREARIAMOS Y GUARDARIAMOS LA LISTA
    }
    else{
      miembro = linea.substr(0, pos);
      std::cout << miembro;
      termino = true;

      if(cantidad_comas == 1){
        //ACA CREARIAMOS Y GUARDARIAMOS AL INDIVIDUO
      }
    }
  }
}
