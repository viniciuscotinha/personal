#include <stdio.h>
#include <stdlib.h>

int main()
{

    int horaFinal, horaInicial, duracao;

    printf("Hora inicial: ");
    scanf("%d", &horaInicial);
    printf("Hora final: ");
    scanf("%d", &horaFinal);

    if (horaFinal > horaInicial) {
        duracao = horaFinal - horaInicial;
    }
    else {
        duracao = 24 - horaInicial + horaFinal;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}
