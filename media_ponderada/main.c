#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    double X, soma, media;
    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        printf("Digite tres numeros:\n");
        scanf("%lf", &X);
        soma = 2 * X;
        scanf("%lf", &X);
        soma = soma + 3 * X;
        scanf("%lf", &X);
        soma = soma + 5 * X;
        media = soma / 10.0;
        printf("MEDIA = %.1lf\n", media);
    }
    return 0;
}
