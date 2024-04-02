#include <stdio.h>
#include <math.h>

int main()
{

    int x, y, i, soma, temporario;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &x, &y);

    if (x > y) {
        temporario = x;
        x = y;
        y = temporario;
    }

    if (x % 2 == 0){
        x = x + 1;
    }
    else {
        x = x + 2;
    }

    for (i = x; i < y; i = i + 2) {
        soma = soma + i;
    }
    printf("SOMA DOS IMPARES = %d\n", soma);

    return 0;
}
