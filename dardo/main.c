#include <stdio.h>
#include <stdlib.h>

int main()
{

    double d1, d2, d3;

    printf("Digite as tres distancias:\n");
    scanf("%lf", &d1);
    scanf("%lf", &d2);
    scanf("%lf", &d3);

    if (d1 > d2 && d1 > d3) {
        printf("MAIOR DISTANCIA = %.2lf\n", d1);
    }
    else {
        if (d2 > d3) {
            printf("MAIOR DISTANCIA = %.2lf\n", d2);
        }
        else {
            printf("MAIOR DISTANCIA = %.2lf\n", d3);
        }
    }

    return 0;
}
