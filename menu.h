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
    //Constructor
    Menu();

    //Inicializar menú
    //Descripción: Procedimiento la dirección de memoria de un arbol vacío, muestra por pantalla las opciones
    //del menú, pide al usuario que ingrese una opción y la ejecuta
    //Pre: Procedimiento una dirección de memoria de un árbol
    //Post: Muestra por pantalla las opciones del menú, pide al usuario que ingrese una opción y la ejecuta
    void inicializar(Arbol* clientes);

  private:
    //Cargar Clientes
    //Descripción: Procedimiento recibe la dirección de memoria de un árbol vacío y lo carga con clientes
    //contenidos en un archivo de texto
    //Pre: Procedimiento una dirección de memoria de un árbol
    //Post: Se cargan los clientes de un archivo .txt en el árbol
    void cargar_clientes(Arbol* clientes);

    //Mostrar menú
    //Post: Procedimiento que imprime por pantalla las opciones del menú
    void mostrar();

    //Ejecutar opción
    //Descripción: Procedimiento que recibe un valor representativo a la opción elegida por el usuario y la dirección de memoria
    //de un árbol de clientes, y ejecuta la opción recibida
    //Pre: Recibe un valor representativo a la opcion elegida por el usuario y la dirección de memoria de un árbol de clientes
    //Post: Ejecuta la opción recibida
    void ejecutar_opcion(int opcion, Arbol* clientes);

    //Mostrar tipo de clientes
    //Post: Imprime por pantalla los tipos de clientes
    void mostrar_tipo_clientes();

    //Crear Cliente
    //Descripción: Recibe un arbol cargado con clientes, crea uno nuevo y lo agrega al arbol
    //Pre: Recibe un arbol cargado con clientes
    //Post: Crea un cliente nuevo y lo agrega al arbol.
    void crear_cliente(Arbol* clientes);

    //Descripción: Pregunta al usuario si quiere seguir agregando miembros a la familia
    //Post: Procedimiento que imprime por pantalla las opciones
    void continuar_agregado_integrantes();

    //Aplicar descuento
    //Descripción: Procedimiento que recibe el precio de un producto y la dirección de memoria de un árbol de clientes, aplica el
    //descuento y muestra por pantalla el precio final
    //Pre: Procedimiento que recibe un número de tipo coma flotante y la dirección de memoria de un árbol de clientes
    //Post: Aplica el descuento y muestra por pantalla el precio final
    void aplicar_descuento(float precio_base, Arbol* clientes);

    //Separar y cargar línea
  	//Descripción: Procedimiento que recibe una línea de texto y una dirección de memoria de un árbol de clientes, separa la línea
    //que contiene el número de teléfono y lo/s nombre/s de los clientes y los carga en el árbol
    //Pre: Procedimiento que recibe una cadena de caracteres y una dirección de memoria de un árbol de clientes
    //Post: Separa la cadena de caracteres que contiene el número de teléfono y lo/s nombre/s de los clientes y los carga en el árbol
    void separar_y_cargar_linea(std::string linea, Arbol* clientes);
};
