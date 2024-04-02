#include <stdio.h>
#include <stdlib.h>

int main()
{

    int segundos, minutos, horas, digitado;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &digitado);

    horas = digitado/60/60;
    minutos = (digitado/60)-horas*60;
    segundos = (digitado%60)%60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
