#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char escala;
    double leitura, saida;

    leitura = 0;
    saida = 0;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c", &escala);

    if (escala == 'C') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &leitura);

        saida = (leitura * (9.0 / 5.0)) + 32.0;
        printf("Temperatura equivalente em Fahrenheit: %.2lf\n", saida);
    }
    else {
        if (escala == 'F') {
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%lf", &leitura);

            saida = 5.0 / 9.0 * (leitura - 32.0);
            printf("Temperatura equivalente em Celsius: %.2lf\n", saida);
        }
        else {
            printf("Erro: escala desconhecida\n");
        }
    }
    return 0;
}
