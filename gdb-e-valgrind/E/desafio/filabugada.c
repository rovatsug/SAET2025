#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int info;
    struct Nodo *prox;
} nodo;

typedef struct {
    nodo *inicio;
    nodo *fim;
} Fila;

Fila *cria_fila() {
    Fila *f = (Fila *)malloc(sizeof(Fila));
    f->inicio = NULL;
    f->fim = NULL;
    return f->inicio;
}

void push(Fila *f, int x) {
    nodo *novo = (nodo *)malloc(sizeof(novo));
    novo->info = x;
    novo->prox = NULL;
    f->fim->prox = novo;
    f->fim = novo;
}

int pop(Fila *f) {
    int popado = f->inicio;
    nodo *tmp = f->inicio;
    f->inicio = f->inicio->prox;
    free(tmp);
    return popado;
}

int somalista(nodo *lista) {
    if (lista->prox == NULL)
        return lista->info;
    else
        return lista->info + somalista(lista->prox);
}

// licenca poetica
int somafila(Fila *f) {
    return somalista(f->inicio);
}

int main() {

    int v[] = {10,21,37,42};
    Fila *f;
    printf("soma: %d\n", somafila(f));

    for (int k=0;k<2;k++) { // repete duas vezes:
        // insere
        for (int i=0;i<4;i++) {
            printf("+ %d\n",v[i]);
            push(f,v[i]);
        }
        printf("soma: %d\n", somafila(f));

        // remove
        for (int i=0;i<4;i++)
            printf("- %d\n", pop(f));
        printf("soma: %d\n", somafila(f));
    }

    return 0;
}
