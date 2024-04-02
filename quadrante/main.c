#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, y;
    x = 1;
    y = 1;

    while (x != 0 && y !=0) {
        printf("Digite os valores das coordenadas X e Y:\n");
        scanf("%d %d", &x, &y);
        if (x > 0 && y > 0) {
            printf("QUADRANTE Q1\n");
        }
        else {
            if (x < 0 && y < 0) {
                printf("QUADRANTE Q3\n");
            }
            else {
                if (x > 0 && y < 0) {
                    printf("QUADRANTE Q4\n");
                }
                else {
                    if (x < 0 &&y > 0){
                        printf("QUADRANTE Q2\n");
                    }
                }
            }
        }
    }


    return 0;
}
