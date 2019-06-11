#ifndef _NODO_LISTA_H_
#define _NODO_LISTA_H_

#include <string>

const std::string VACIO = " ";

class Nodo_lista{
    //Atributos
    private:
        std::string nombre;
        Nodo_lista* siguiente;

    //Métodos
    public:
        //Constructor
        Nodo_lista();

        //Constructor con parametros
        Nodo_lista(std::string nombre);

        //Asignar nombre
        //Descripción: Procedimiento que recibe un nombre y lo asigna al atributo nombre de la clase
        //Pre: Procedimiento que recibe una cadena de caracteres
        //Post: Asigna la cadena de caracteres recibida al atributo nombre de la clase
        void asignar_nombre(std::string nombre);

        //Obtener nombre
        //Post: Devuelve la cadena de caracteres del nombre que guarda dicho nodo
        std::string obtener_nombre();

        //Asignar siguente
        //Descripción: Procedimiento que recibe la dirección de memoria de un nodo y la asigna al atributo siguiente de la clase
        //Pre: Procedimiento que recibe un puntero a un objeto de clase Nodo
        //Post: Asigna el puntero recibido al atributo siguiente de la clase
        void asignar_siguiente(Nodo_lista* siguiente);

        //Obtener siguiente
        //Post: Devuelve un puntero con la dirección de memoria del siguente nodo
        Nodo_lista* obtener_siguiente();
};

#endif
