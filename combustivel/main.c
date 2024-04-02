#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, alcool, gasolina, disel;

    disel = 0;
    gasolina = 0;
    alcool = 0;

    while (x != 4) {
        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &x);
        if (x == 1){
            alcool = alcool + 1;
        }
        else {
            if (x == 2) {
                gasolina = gasolina + 1;
            }
            else {
                if (x == 3) {
                    disel = disel + 1;
                }
            }
        }
    }

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDisel: %d\n", alcool, gasolina, disel);

    return 0;
}
