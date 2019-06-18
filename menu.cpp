#include "menu.h"

Menu::Menu(){}

void Menu::cargar_clientes(Arbol* clientes){
  std::ifstream archivo_leer;
	archivo_leer.open(RUTA);
  std::string linea;

  if(archivo_leer.is_open()){
		while(getline(archivo_leer, linea)){
      cargar_y_separar_linea(linea, clientes);
		}
	}else{
		std::cout << "- Error al abrir archivo -" << std::endl;
		return;
	}
	archivo_leer.close();
}

void Menu::cargar_y_separar_linea(std::string linea, Arbol* clientes){
  std::string miembro, primero;
  bool termino = false;
  unsigned tam;

  //LEO TELEFONO
  unsigned pos = linea.find(',');
  std::string string_telefono = linea.substr(0, pos);
  unsigned long telefono = atoi(string_telefono.c_str());
  //std::cout<< telefono << std::endl;

  linea = linea.substr(pos + 1);
  pos = linea.find(',');
  tam = linea.length();

  if(pos > tam){ //LEO EL UNICO CLIENTE
    miembro = linea;
    Individuo* nuevo = new Individuo(telefono, miembro);
    clientes->insertar_cliente(nuevo);
  }
  else{
    miembro = linea.substr(0, pos);
    Lista* familia = new Lista;
    familia->agregar_nombre(miembro);

    while(!termino){
      linea = linea.substr(pos + 1);
      pos = linea.find(',');
      tam = linea.length();

      if(pos < tam){
        miembro = linea.substr(0, pos);
        familia->agregar_nombre(miembro);
      }
      else{
        miembro = linea;
        familia->agregar_nombre(miembro);
        termino = true;
      }
    }
    Familia* nueva = new Familia(telefono, familia);
    clientes->insertar_cliente(nueva);
  }
}
