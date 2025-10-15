#include <stdio.h>

double raiz(double x) {
    double a = 0, b = x;
    while (b-a > 1e-7) {
        double r = (a+b)/2;
        if (r*r <= x)
            a = r;
        else
            b = r;
    }
    return (a+b)/2;
}

int main() {

    double x;
    scanf("%lf",&x);
    while (x != -1) {
        printf("%.5lf\n",raiz(x));
        scanf("%lf",&x);
    }

    return 0;
}
