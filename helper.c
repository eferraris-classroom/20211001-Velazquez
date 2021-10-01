//
// Created by nicov on 1/10/2021.
//

#include "helper.h"
#include <stdlib.h>
#include <stdio.h>

void insertarEnArbol(Nodo ** pRaiz, Nodo * n) {

    if ( *pRaiz == NULL ) {
        *pRaiz = n;
    } else if ( n->valor > (*pRaiz)->valor ) {
        insertarEnArbol( &((*pRaiz)->der) , n);
    } else if ( n->valor < (*pRaiz)->valor ) {
        insertarEnArbol( &((*pRaiz)->izq) , n);
    } else {
        printf("No se pueden insertar duplicados en el arbol binario de busqueda");
    }
}

Nodo * find(Nodo * raiz, int valor) {

    if ( raiz == NULL ) {
        return NULL;
    } else if ( raiz->valor == valor ) {
        return raiz;
    } else if ( valor < raiz->valor ) {
        return find(raiz->izq, valor);
    } else {
        return find(raiz->der, valor);
    }
}

Nodo * newNodo(int valor) {

    Nodo * aux = NULL;

    aux = (Nodo *) malloc(sizeof(Nodo));
    aux->der = NULL;
    aux->izq = NULL;
    aux->valor = valor;

    return aux;
}

/* Funcion produndidad agregada en el min 50 de la clase
 *
 * void profundidad(Nodo * raiz){

    int altDer;
    int altIzq;

    if(raiz == NULL){
        return 0;
    }else{
        altDer = profundidad(raiz->der);
        altIzq = profundidad(raiz->izq);
    }

    if(altDer > altIzq){
        return altDer +1;
    }else{
        return altIzq +1;
    }

}*/
