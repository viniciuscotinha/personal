#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, a, b;
    double divisao;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Entre com o numerador: ");
        scanf ("%d", &a);
        printf("Entre com o denominador: ");
        scanf ("%d", &b);

        if (b != 0) {
            divisao = (double) a / b;
            printf("DIVISAO = %.2lf\n", divisao);
        }
        else {
            printf("DIVISAO IMPOSSIVEL\n");
        }
    }

    return 0;
}
