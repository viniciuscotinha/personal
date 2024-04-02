#include <stdio.h>
#include <stdlib.h>

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    char nome[50];
    printf("Nome: ");
    ler_texto(nome, 50);

    double valorHora, horas, pagamento;

    printf("Valor por hora: ");
    scanf("%lf", &valorHora);
    printf("Horas trabalhadas: ");
    scanf("%lf", &horas);

    pagamento = valorHora * horas;

    printf("O pagamento para %s deve ser de %.2lf\n", nome, pagamento);

    return 0;
}
