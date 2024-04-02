#include <stdio.h>
#include <stdlib.h>

int main()
{

    double precoUn, recebido, troco, falta;
    int quantidade;

    printf("Proco unitario do produto: ");
    scanf("%lf", &precoUn);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &recebido);

    troco = (double) recebido - (precoUn * quantidade);

    if (troco < 0) {
        falta = - (troco);
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", falta);
    }
    else {
        printf("TROCO = %.2lf\n", troco);
    }


    return 0;
}
