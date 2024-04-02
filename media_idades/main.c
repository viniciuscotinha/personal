#include <stdio.h>
#include <stdlib.h>

int main()
{

    int soma, n, x;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &x);
    n = 0;
    soma = 0;
    if (x < 0){
        printf("IMPOSSIVEL CALCULAR\n");
    }
    else {
        while (x > 0) {
            n = n + 1;
            soma = soma + x;
            scanf("%d", &x);
        }
    }
    media = (double) soma / n;
    printf("MEDIA = %.2lf\n", media);
    return 0;
}
