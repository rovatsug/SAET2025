#include <stdio.h>

int main() {
    int n, aux;
    scanf("%d",&n);
    int v[n];
    for (int i=0;i<n;i++)
        scanf("%d",&v[i]);

    // bubble?
    for (int i=0;i<n;i++)
        for (int j=0;j+1<n;j++)
            if (v[j] > v[j+1]) {
		aux = v[j+1];
                v[j+1] = v[j];
                v[j] = aux;
            }
    for (int i=0;i<n;i++)
        printf("%d ",v[i]);
    printf("\n");

    return 0;
}

