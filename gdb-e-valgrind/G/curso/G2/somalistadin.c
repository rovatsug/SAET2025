#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int info;
    struct Nodo *prox;
} nodo;

int main() {

    int n, x;
    scanf("%d",&n);
    nodo *lista = NULL;
    for (int i=0;i<n;i++) {
        scanf("%d",&x);
        nodo *novo = (nodo *)malloc(sizeof(nodo));
        novo->info = x;
        novo->prox = lista;
        lista = novo;
    }

    int soma=0;
    nodo *aux = lista;
    while (aux != NULL) {
        soma += aux->info;
        aux = aux->prox;
    }
    printf("%d\n",soma);

    return 0;
}
