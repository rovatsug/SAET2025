#include <stdio.h>

int main() {

    int n;
    int v[100];
    scanf("%d", &n);
    for (int i=0;i<n;i++)
        scanf("%d",&v[i]);

    int soma = 0;
    for (int i=0;i<n;i++)
        soma+=v[i];

    printf("%d\n",soma);
    return 0;
}
