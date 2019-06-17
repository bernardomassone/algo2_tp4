#include "arbol.h"

Arbol::Arbol(){
    raiz = nullptr;
}

void Arbol::call_recorrido_inorder() {
	recorrido_inorder(raiz);
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
       return buscar_cliente(nodo->obtener_hijo_izquierda(), telefono);
    else return buscar_cliente(nodo->obtener_hijo_derecha(), telefono);
}

void Arbol::insertar_cliente(Cliente* nuevo_cliente){
    Nodo_arbol* head = raiz;
    Nodo_arbol* tail = nullptr;
    Nodo_arbol* nuevo = new Nodo_arbol(nuevo_cliente->obtener_telefono(), nuevo_cliente);
    while(head){
        tail = head;
        if(nuevo_cliente->obtener_telefono() < head->obtener_cliente()->obtener_telefono())
            head = head->obtener_hijo_izquierda();
        else head = head->obtener_hijo_derecha();
    }
    if(!tail) //Estaba vacio 
        raiz = nuevo;
    else if(tail->obtener_cliente()->obtener_telefono() > nuevo_cliente->obtener_telefono())
        tail->asignar_hijo_izquierda(nuevo);
    else tail->asignar_hijo_derecha(nuevo);
}

void Arbol::eliminar_cliente(unsigned long telefono){
	raiz = eliminar_cliente_private(raiz, telefono);
}

Nodo_arbol* Arbol::eliminar_cliente_private(Nodo_arbol* raiz, unsigned long telefono){
	if (!raiz) {
		std::cout << "El arbol esta vacio" << std::endl;
		return raiz;
	}
	if (telefono < raiz->obtener_telefono()) {
		raiz->asignar_hijo_izquierda(eliminar_cliente_private(raiz->obtener_hijo_izquierda(), telefono));
	}
	else if (telefono > raiz->obtener_telefono()) {
		raiz->asignar_hijo_derecha(eliminar_cliente_private(raiz->obtener_hijo_derecha(), telefono));
	}
	else {
		if (!raiz->obtener_hijo_izquierda()) {
			Nodo_arbol* temp = raiz->obtener_hijo_derecha();
			delete raiz;
			return temp;
		}
		else if (!raiz->obtener_hijo_derecha()) {
			Nodo_arbol* temp = raiz->obtener_hijo_izquierda();
			delete raiz;
			return temp;
		}

		Nodo_arbol* temp = raiz->obtener_hijo_derecha();
		while (temp->obtener_hijo_izquierda())
			temp = temp->obtener_hijo_izquierda();
		raiz->asignar_cliente(temp->obtener_cliente());
		raiz->asignar_telefono(temp->obtener_telefono());
		raiz->asignar_hijo_derecha(eliminar_cliente_private(raiz->obtener_hijo_derecha(), temp->obtener_telefono()));
	}
	return raiz;
}


Arbol::~Arbol(){ //Destruimos desde la raiz hacia abajo
    while(raiz){
        eliminar_cliente(raiz->obtener_cliente()->obtener_telefono());
    }
}

