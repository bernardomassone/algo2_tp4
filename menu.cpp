#include "menu.h"
const unsigned long NUMERO_DEFAULT = 103320;

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

void Menu::inicializar(Menu menu,Arbol* clientes){
  menu.cargar_clientes(clientes);
  
  int opcion = 0;
  
  while(opcion != 6){
    mostrar();
    std::cout << "Ingrese opcion." << std::endl;
    std::cin >> opcion;
    std::cout << std::endl << std::endl;
    ejecutar_opcion(opcion, clientes);
  }
}

void Menu::mostrar(){
  std::cout << std::endl << std::endl << std::endl;
  std::cout << "------------------------MENU------------------------" << std::endl;
  std::cout << "1 - Mostrar clientes." << std::endl;
  std::cout << "2 - Agregar nuevo cliente." << std::endl;
  std::cout << "3 - Dar de baja cliente." << std::endl;
  std::cout << "4 - Buscar cliente" << std::endl;
  std::cout << "5 - Consulta de precio." << std::endl;
  std::cout << "6 - Salir." << std::endl;
  std::cout << "----------------------------------------------------" << std::endl;
}

void Menu::mostrar_tipo_clientes(){
  std::cout << std::endl << std::endl << std::endl;
  std::cout << "----------------------------------------------------" << std::endl;
  std::cout << "1 - Individuo." << std::endl;
  std::cout << "2 - Familia." << std::endl;
  std::cout << "----------------------------------------------------" << std::endl;
}

void Menu::crear_cliente(Arbol* clientes){
  int opcion = 0, seguir = 1;
  unsigned long telefono = NUMERO_DEFAULT;
  
  while(opcion != 1 && opcion != 2){ 
    std::cout << "Elija el tipo de cliente que desea ingresar." << std::endl;
    mostrar_tipo_clientes();
    std::cin >> opcion;
    if(opcion != 1 && opcion != 2)
      std::cout << std::endl << "Entrada inválida" << std::endl;
  }

  if(opcion == 1){
    std::string nombre;
    std::cout << std::endl << "Ingrese el nombre completo del cliente: ";
    std::cin.ignore();
    std::getline(std::cin, nombre,'\n');
    Individuo* nuevo = new Individuo(telefono, nombre);
    clientes->insertar_cliente(nuevo);
  }
  else{
    std::string miembro;
    Lista* familia = new Lista;

    while(seguir == 1){
      std::cout << std::endl << "Ingrese el nombre completo: ";
      std::cin.ignore();
      std::getline(std::cin, miembro,'\n');
      familia->agregar_nombre(miembro);
      continuar();
      std::cin >> seguir;
    }

    Familia* nueva = new Familia(telefono, familia);
    clientes->insertar_cliente(nueva);
  }
}

void Menu::continuar(){
  std::cout << std::endl << std::endl << std::endl;
  std::cout << "----------------------------------------------------" << std::endl;
  std::cout << "Desea agregar mas miembros de la familia?" << std::endl;
  std::cout << "----------------------------------------------------" << std::endl;
  std::cout << "1 - Si." << std::endl;
  std::cout << "2 - No." << std::endl;
  std::cout << "----------------------------------------------------" << std::endl;
}

void Menu::aplicar_descuento(float precio_base, Arbol* clientes){
  unsigned long telefono = 0;
  Nodo_arbol* buscado = nullptr;
  Nodo_arbol* raiz = clientes->obtener_raiz();

  std::cout << "Ingrese el numero de telefono del cliente: ";
  std::cin >> telefono;

  buscado = clientes->obtener_cliente(raiz, telefono);

  if(buscado){
        buscado->obtener_cliente()->aplicar_descuento(precio_base);
        buscado->obtener_cliente()->mostrar();
        std::cout << "----------------------------------------------------" << std::endl;
        std::cout << "Precio del producto: $";
        std::cout << precio_base << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
}

void Menu::ejecutar_opcion(int opcion, Arbol* clientes){
  unsigned long telefono;
  switch(opcion){
    case 1:
        std::cout << "----------------------CLIENTES----------------------" << std::endl;
        clientes->recorrido_inorder();
        std::cout << "----------------------------------------------------" << std::endl;
        
    break;

    case 2:
        crear_cliente(clientes);    
    break;

    case 3:
        std::cout << "Ingrese el numero de telefono del cliente: ";
        std::cin >> telefono;
        clientes->eliminar_cliente(telefono);   
    break;

    case 4:
        std::cout << "Ingrese el numero de telefono del cliente: ";
        std::cin >> telefono;
        clientes->buscar_cliente(telefono);
        std::cout << "----------------------------------------------------" << std::endl;
    break;

    case 5:
        float precio_base;
        std::cout << "Ingrese el precio del producto: ";
        std::cin >> precio_base;
        aplicar_descuento(precio_base, clientes);
    break;

    case 6:
      std::cout << std::endl << "Hasta luego!" << std::endl;
    break;

    default:
      std::cout << std::endl << "Entrada inválida" << std::endl;
    break;
  }
}