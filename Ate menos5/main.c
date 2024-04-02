#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite um numero\n");
    scanf("%d", &x);
    while(x != -5) {
        printf("digite outro numero\n");
        scanf("%d", &x);

    }
    printf("Fim\n");
    return 0;
}
