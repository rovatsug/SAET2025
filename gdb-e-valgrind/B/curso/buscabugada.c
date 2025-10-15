#include <stdio.h>

int main() {

    int n;
    int v[50];
    int x;

    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&v[i]);
    scanf("%d",&x);
    int a = 0, b = n-1;
    while (a <= b) {
        int meio = (a+b)/2;
        if (v[meio]==x) {
            printf("Encontrei\n");
            return 0;
        }
        if (x < v[meio])
            b = meio-1;
        else
            a = meio+1;
    }
    printf("Nao encontrei\n");

    return 0;
}
