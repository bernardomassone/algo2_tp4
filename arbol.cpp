#include "arbol.h"

Arbol::Arbol(){
    raiz = nullptr;
}

void Arbol::recorrido_inorder(Nodo_arbol* nodo){
    if(nodo){
        recorrido_inorder(nodo->obtener_hijo_izquierda());
        nodo->obtener_cliente()->mostrar();
        recorrido_inorder(nodo->obtener_hijo_derecha());
    }
}

void Arbol::call_buscar_cliente(unsigned long telefono){
    Nodo_arbol* buscado = nullptr;
    buscado = buscar_cliente(raiz, telefono);
    if(!buscado){
        std::cout << "El cliente buscado no se encuentra en el arbol" << std::endl;
    }
    else{
        std::cout << "Mostrando cliente buscado" << std::endl;
        buscado->obtener_cliente()->mostrar();
    }
}

Nodo_arbol* Arbol::buscar_cliente(Nodo_arbol* nodo, unsigned long telefono){
    if(!nodo || telefono == nodo->obtener_cliente()->obtener_telefono())
        return nodo;
    if(telefono < nodo->obtener_cliente()->obtener_telefono())
        buscar_cliente(nodo->obtener_hijo_izquierda(), telefono);
    else buscar_cliente(nodo->obtener_hijo_derecha(), telefono);
}
