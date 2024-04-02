#include <stdio.h>
#include <stdlib.h>

int main()
{

    double precoUn, dinheiro, troco;
    int quantidade;

    printf("Preco unitario do produto: ");
    scanf("%lf", &precoUn);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    troco = dinheiro - (precoUn * quantidade);

    printf("TROCO = %.2lf\n", troco);

    return 0;
}
