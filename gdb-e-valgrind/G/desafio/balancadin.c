#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Nodo {
    char info;
    struct Nodo *prox;
} nodo;

typedef struct {
    nodo *topo;
} Pilha;

Pilha *cria_pilha() {
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p = NULL;
    return p;
}

int pilha_vazia(Pilha *p) {
    return (p->topo=NULL);
}

int pop(Pilha *p) {
    char popado = p->topo->info;
    nodo *aux = (nodo *)malloc(sizeof(nodo));
    aux = p->topo->prox;
    p->topo = aux;
    return popado;
}

void push(Pilha *p, char x) {
    nodo *novo = (nodo *)malloc(sizeof(novo));
    novo->info = x;
    novo->prox = p;
    p = novo;
}

void libera_pilha(Pilha *p) {
    free(p);
}

int main() {

    char s[100];
    while (scanf("%s",s) != EOF) {
        int n = strlen(s);
        Pilha *p;
        int certo = 1;
        for (int i=0;i<n;i++) {
            if (s[i]='(' || s[i]=='[')
                push(p,s[i]);
            else if (pilha_vazia(p)) {
                certo=0;
                break;
            } else {
                char c = pop(p);
                if (s[i]=')' && c != '(') {
                    certo=0;
                    break;
                }
                if (s[i]=']' && c != '[') {
                    certo=0;
                    break;
                }
            }
        }

        if (!pilha_vazia(p))
            certo = 0;

        printf("%s: %s\n", s, certo ? "sim" : "nao" );
        libera_pilha(p);
    }
    return 0;
}
