#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, soma;

    x = 1;

    while (x != 0) {
        printf ("Digite um numero inteiro: ");
        scanf("%d", &x);
        if (x != 0 && x%2 == 0) {
            soma = x + x+2 + x+4 + x+6 + x+8;
            printf("SOMA = %d\n", soma);
        }
        else
            if (x != 0) {

                soma = x+1 + x+3 + x+5 + x+7 + x+9;
                printf("SOMA = %d\n", soma);
            }
    }


    return 0;
}
