#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i, N, fora, dentro;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    fora = 0;
    dentro = 0;

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);
        if (x >= 10 && x <= 20) {
            dentro = dentro + 1;
        }
        else {
            fora = fora + 1;
        }
    }

    printf("%d DENTRO\n%d FORA\n", dentro, fora);

    return 0;
}
