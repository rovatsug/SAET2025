#include <stdio.h>

int soma(int *v, int pos) {
    if (v[pos] == -1) return 0;
    return v[pos] + soma(v, pos+1);
}

int main() {

    int v[6000]={0}, n=0, x;
    scanf("%d", &x);
    while (x != -1 && n < 6000) {
        v[n++] = x;
        scanf("%d", &x);
    }
    v[n] = -1;
    printf("%d\n",soma(v,0));


    return 0;
}
