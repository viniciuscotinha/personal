#include <stdio.h>

int main()
{
    int i, N, coelho, rato, sapo, quantidade, total;
    double percentualCoelho, percentualRato, percentualSapo;
    char tipo;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &N);

    sapo = 0;
    rato = 0;
    coelho = 0;

    for (i = 0; i < N; i++) {
        printf("Quantidade de cobaias: ");
        scanf("%d", &quantidade);
        printf("Tipo de cobaia: ");
        scanf(" %c", &tipo);

        if (tipo == 'C') {
            coelho = coelho + quantidade;
        }
        else {
            if (tipo == 'R') {
                rato = rato + quantidade;
            }
            else {
                if (tipo == 'S') {
                    sapo = sapo + quantidade;
                }
            }
        }
    }

    total = sapo + rato + coelho;
    percentualCoelho = (double) coelho / total * 100;
    percentualRato = (double) rato / total * 100;
    percentualSapo = (double) sapo / total * 100;

    printf("\nRELATORIO FINAL\nTotal: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf\nPercentual de ratos: %.2lf\nPercentual de sapos: %.2lf\n", total, coelho, rato, sapo, percentualCoelho, percentualRato, percentualSapo);

    return 0;
}
