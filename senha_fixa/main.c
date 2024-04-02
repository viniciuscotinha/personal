#include <stdio.h>
#include <stdlib.h>

int main()
{

    int senha;
    printf("Digite a senha: ");
    scanf("%d", &senha);

    if (senha != 2002) {
        while (senha != 2002) {
            printf("Senha Invalida! Tente novamente: ");
            scanf("%d", &senha);
        }
    }

    printf("Acesso permitido!\n");

    return 0;
}
