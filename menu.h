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

    //Inicializar menu
    //Descripción: Procedimiento que recibe un menu y un arbol vacio, muestra por pantalla las opciones del menu, pide al usuario que ingrese una opcion y la ejecuta.
    //Pre: Recibe un menu y un arbol vacio.
    //Post: Muestra por pantalla las opciones del menu, pide al usuario que ingrese una opcion y la ejecuta.
    void inicializar(Menu menu, Arbol* clientes);

    //Cargar Clientes
    //Descripción: Procedimiento recibe un arbol y lo carga con clientes a traves de un archivo.
    //Pre: Recibe un arbol vacio.
    //Post: El arbol queda correctamente cargado con clientes.
    void cargar_clientes(Arbol* clientes);

    //Mostrar menu
    //Post: Imprime por pantalla las opciones del menu.
    void mostrar();

    //Ejecutar opcion
    //Descripción: Procedimiento que recibe un valor representativo a la opción elegida por el usuario y un arbol cargado con clientes. Ejecuta la opción recibida
    //Pre: Recibe un valor representativo a la opcion elegida por el usuario y un arbol cargado con clientes.
    //Post: Ejecuta la opcion recibida.
    void ejecutar_opcion(int opcion, Arbol* clientes);

    //Mostrar tipo de clientes
    //Post: Imprime por pantalla los tipos de cliente.
    void mostrar_tipo_clientes();

    //Crear Cliente
    //Descripción: Recibe un arbol cargado con clientes, crea uno nuevo y lo agrega al arbol.
    //Pre: Recibe un arbol cargado con clientes
    //Post: Crea un cliente nuevo y lo agrega al arbol.
    void crear_cliente(Arbol* clientes);

    //Descripción: Pregunta al usuario si quiere seguir agregando miembros a la familia.
    //Post: Imprime por pantalla las opciones
    void continuar();

    //Aplicar descuento
    //Descripción: Método que recibe el precio de un producto, aplica el descuento y muestra por pantalla el precio con el descuento aplicado.
    //Pre: Método que recibe un número de tipo coma flotante
    //Post: Aplica el descuento y muestra por pantalla el precio con el descuento aplicado
    void aplicar_descuento(float precio_base, Arbol* clientes);

  private:
  	//Descripción: 
    //Pre: 
    //Post: 
    void cargar_y_separar_linea(std::string linea, Arbol* clientes);
};
