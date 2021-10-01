//
// Created by nicov on 1/10/2021.
//

#ifndef BASE_PROJECT_HELPER_H
#define BASE_PROJECT_HELPER_H

#define N 5

typedef struct nodo {
    int valor;
    struct nodo * izq;
    struct nodo * der;
} Nodo;

Nodo * find(Nodo *, int);
void insertarEnArbol(Nodo **, Nodo *);
// void profundidad(Nodo *);  Funcion profundidad agragada al final de la clase
Nodo * newNodo(int);

#endif //BASE_PROJECT_HELPER_H
