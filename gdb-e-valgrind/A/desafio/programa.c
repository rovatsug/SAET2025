#include <stdio.h>

int max(int a, int b) { return a > b ? a : b; }

int main() {

    int n, a, b, c;

    scanf("%d",&n);
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n%d\n%d\n",a,b,c);
    for (int i=3;i<n;i++) {
        int d = (2*(max(a,b)) + 3*(a+b) + 5*(c-a+b/7))%58192345;
        printf("%d\n",d);
        int e;
        scanf("%d", &e);
        a=c;
        b=d;
        c=e;
    }

    return 0;
}
