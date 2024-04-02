#include <stdio.h>

int main()
{

    int i, N;
    double media, soma;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    soma = 0;
    printf("VALORES = ");
    for (i = 0; i < N; i++) {
        printf("%.1lf ", vet[i]);
        soma = soma + vet[i];
    }

    media = (double) soma / N;
    printf("\nSOMA = %.2lf\nMEDIA = %.2lf\n", soma, media);

    return 0;
}
