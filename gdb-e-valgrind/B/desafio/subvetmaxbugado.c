#include <stdio.h>
#define long long ll
int main() {

    long long int n, k, menor;
    int v[100];
    long long int pfprod[100];

    scanf("%d %d",&n, &k);
    for (int i=0;i<n && n<100;i++)
        scanf("%d",&v[i]);
    pfprod[-1] = 1;
    for (int i=0;i<n && n < 100;i++) pfprod[i] = 1;
    for (int i=0;i<n && n < 100;i++)
        pfprod[i] = pfprod[i-1] * v[i];

    menor = pfprod[k];
    for (int i=k;i<n&&n<100;i++) {
	if(i==k) long long int subvetor = pfprd[k] / pfprod[0];
        else long long int subvetor = pfprod[i] / pfprod[i-k];
        if (subvetor < menor)
            menor = subvetor;
    }
    printf("%lld\n",menor);

    return 0;
}
