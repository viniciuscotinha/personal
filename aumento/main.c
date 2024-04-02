#include <stdio.h>
#include <stdlib.h>

int main()
{

    double salario, novo, aumento, porcentagem;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);

    if (salario <= 1000) {
        porcentagem = 20;
    }
    else {
        if (salario <= 3000) {
            porcentagem = 15;
        }
        else {
            if (salario <= 8000) {
                porcentagem = 10;
            }
            else {
                porcentagem = 5;
            }
        }
    }

    novo = salario * (100 + porcentagem) / 100;
    aumento = novo - salario;

    printf("Novo salario = R$ %.2lf\n Aumento = R$ %.2lf\n Porcentagem = %.0lf %% \n", novo, aumento, porcentagem);

    return 0;
}
