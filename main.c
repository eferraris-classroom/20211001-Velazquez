#include <stdio.h>
#include "helper.h"

int main() {

    Nodo * raiz = NULL;
    int i, numero;

    for (i = 0; i < N; i++) {
        printf("Ingrese un numero: ");
        scanf("%d",&numero);
        insertarEnArbol(&raiz, newNodo(numero));
    }

    printf("Ingrese valor: ");
    scanf("%d", &numero);

    if ( find(raiz, numero) == NULL ) {
        printf("No existe un nodo con el valor: %d", numero);
    } else {
        printf("Existe el valor: %d", numero);
    }

    return 0;
}
