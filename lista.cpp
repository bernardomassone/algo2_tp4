#include "lista.h"

Lista::Lista(){
  primero = NULL;
  ultimo = NULL;
  tam = 0;
}

bool Lista::esta_vacia(){
    return !tam;
}

Nodo_lista* Lista::obtener_primero(){
    return primero;
}

Nodo_lista* Lista::obtener_ultimo(){
    return ultimo;
}

int Lista::obtener_tam(){
  return tam;
}

void Lista::agregar_nombre(std::string nombre){
    Nodo_lista* nuevo = new Nodo_lista;
    nuevo->asignar_nombre(nombre);

    if(esta_vacia() )
        primero = nuevo;
    else
        ultimo->asignar_siguiente(nuevo);

    ultimo = nuevo;
    tam++;
}

std::string Lista::obtener_nombre(int posicion){
  int contador = INICIO;
  Nodo_lista* aux = primero;
  std::string nombre;

  while(contador <= tam){
    if(posicion == contador){
      nombre = aux->obtener_nombre();
      contador = tam+1;
    }
    else{
      aux = aux->obtener_siguiente();
      contador++;
    }
  }
  return nombre;
}

void Lista::copiar(Lista* copia, Lista* original){
  std::string aux, nueva;

  for(int i = INICIO; i <= original->obtener_tam(); i++){
    aux = original->obtener_nombre(i);
    copia->agregar_nombre(aux);
  }
}

void Lista::eliminar_primero(){
    Nodo_lista* aux = primero;
    primero = aux->obtener_siguiente();
    delete aux;
    tam--;
}

void Lista::imprimir_lista(){
  std::string aux;

  for(int i = INICIO; i <= obtener_tam(); i++){
    aux = obtener_nombre(i);
    std::cout<<aux<<"  ";
  }
  std::cout<<std::endl;
}

Lista::~Lista(){
    while(!esta_vacia() ){
        eliminar_primero();
    }
}
