#include <stdio.h>

void insere(int v[], int n, int x) {
    v[n] = x;
}

int busca(int v[], int n, int x) {
    for (int i=0;i<n;i++)
        if (v[i]=x)
            return 1;
    return 0;
}

void imprime(int v[], int n) {
    for (int i=0;i<n;i++)
        printf("%d ",v[i]);
    printf("\n");
}

int main() {

    int v[1000], n=0, x;
    scanf("%d",&x);
    while (x != -1) {
        insere(v,n,x);
        scanf("%d",&x);
	n++;
    }
    
    imprime(v,n);
    scanf("%d",&x);
    if (busca(v,n,x)==1)
        printf("%d encontrado\n",x);
    else
        printf("%d nao encontrado\n",x);

    return 0;
}
