#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade, codigo;
    double preco, valor;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        preco = 5;
    }
    else {
        if (codigo == 2) {
            preco = 3.5;
        }
        else {
            if (codigo == 3) {
                preco = 4.8;
            }
            else {
                if (codigo == 4) {
                    preco = 8.9;
                }
                else {
                    if (codigo == 5) {
                        preco = 7.32;
                    }
                    else {
                        printf("CODIGO INVALIDO");
                    }
                }
            }
        }
    }

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    valor = preco * quantidade;

    printf("Valor a pagar: R$ %.2lf\n", valor);
    return 0;
}
