#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N, i, x, fatorial;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    fatorial = 1;
    for (i = 1; i <= N; i++) {
        fatorial = fatorial * i;
    }
    printf("FATORIAL = %d\n", fatorial);
    return 0;
}
