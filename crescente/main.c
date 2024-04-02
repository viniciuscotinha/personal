#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, y;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &x, &y);

    if (x == y) {
    }
    else {
        if (x > y) {
            printf("DECESCENTE!\n");
        }
        else {
            printf("CESCENTE!\n");
        }
    }

    while (x != y) {
        printf("Digite outros dois numeros:\n");
        scanf("%d %d", &x, &y);

        if (x > y) {
            printf("DECESCENTE!\n");
        }
        else {
            if (x < y) {
                printf("CESCENTE!\n");
            }
        }
    }

    return 0;
}
