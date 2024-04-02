#include <stdio.h>
#include <stdlib.h>

int main()
{

    double minutos, pagar;

    printf("Digite a quantidade de minutos: ");
    scanf("%lf", &minutos);

    if (minutos > 100) {
        pagar = 50 + ((minutos - 100) * 2);
    }
    else {
        pagar = 50;
    }
    printf ("Valor a pagar: %.2lf\n", pagar);
    return 0;
}
