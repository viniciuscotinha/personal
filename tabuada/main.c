#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, i, conta;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &valor);

    for (i = 1 ; i <= 10 ; i++) {
        conta = i * valor;
        printf("%d x %d = %d\n", valor, i, conta);
    }

    return 0;
}
