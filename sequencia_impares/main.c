#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, X;

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    for (i = 1; i <= X; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
