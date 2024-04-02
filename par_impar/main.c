#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, N, X;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &X);
        if (X != 0) {
            if (X % 2 == 0) {
                printf("PAR ");
            }
            else {
                printf("IMPAR ");
            }
            if (X > 0) {
                printf("POSITIVO\n");
            }
            else {
                printf("NEGATIVO\n");
            }
        }
        else {
            printf("NULO\n");
        }
    }

    return 0;
}
