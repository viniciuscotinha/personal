#include <stdio.h>
#include <stdlib.h>

int main()
{
    double raio, area;

    printf("Digite o raio da circunferencia: ");
    scanf("%lf", &raio);

    area = 3.14159 * pow(raio, 2);

    printf("AREA = %.3lf\n", area);

    return 0;
}
