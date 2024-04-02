#include <stdio.h>
#include <stdlib.h>

int main()
{

    double a, b, c, quadrado, triangulo, trapezio;

    printf("Digite a medida A: ");
    scanf("%lf", &a);
    printf("Digite a medida B: ");
    scanf("%lf", &b);
    printf("Digite a medida C: ");
    scanf("%lf", &c);

    quadrado = pow(a, 2);
    triangulo = (a*b)/2;
    trapezio = ((a+b)*c)/2;

    printf("AREA DO QUADRADO = %.4lf\n AREA DO TRIANGULO = %.4lf\n AREA DO TRAPEZIO = %.4lf\n", quadrado, triangulo, trapezio);

    return 0;
}
