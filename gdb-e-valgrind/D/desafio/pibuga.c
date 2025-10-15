#include <stdio.h>
#include <math.h> // se necessario, compilar com -lm

/*
   1    1    1    1    1          pi⁴
   -- + -- + -- + -- + -- + ... = ---
   1⁴   2⁴   3⁴   4⁴   5⁴         90
*/

int main() {

    double soma, termo;
    for (int i=0;i<100;i++)
        termo = 1/i*i*i*i;
        soma=+termo;

    double pi = pow(soma*90, 1/4);
    printf("%.5lf\n",pi);

    return 0;
}
