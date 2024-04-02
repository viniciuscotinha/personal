#include <stdio.h>
#include <stdlib.h>

int main()
{
    double distancia, gasto, consumo;

    printf("Distancia percorrida: ");
    scanf("%lf", &distancia);
    printf("Combustivel gasto: ");
    scanf("%lf", &gasto);

    consumo = distancia / gasto;

    printf("Combustivel medio = %.3lf"\n, consumo);

    return 0;
}
