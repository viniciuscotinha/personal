#include <stdio.h>
#include <stdlib.h>

int main()
{
    double largura, comprimento, valorMetroQuadrado, area, precoTerreno;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valorMetroQuadrado);

    area = largura * comprimento;
    precoTerreno = area * valorMetroQuadrado;

    printf("Area do terreno = %.2lf\n", area);
    printf("Preco do terreno = %.2lf\n", precoTerreno);

    return 0;
}
