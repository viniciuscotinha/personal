#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M1, M2, M3, N1, N2, N3, i, j, k;
    printf("Qual a ordem da primeira matriz?\nlinhas: " );
    scanf("%d", &M1);
    printf("colunas: ");
    scanf("%d", &N1);
    int mat1[M1][N1];
    for (i = 0; i < M1; i++) {
        for (j = 0; j < N1; j++) {
                printf("Elemento[%d, %d]: ", i,j);
                scanf("%d", &mat1[i][j]);
        }
    }
    printf("Qual a ordem da segunda matriz?\nlinhas: " );
    scanf("%d", &M2);
    printf("colunas: ");
    scanf("%d", &N2);
    int mat2[M2][N2];
    for (i = 0; i < M2; i++) {
        for (j = 0; j < N2; j++) {
                printf("Elemento[%d, %d]: ", i,j);
                scanf("%d", &mat2[i][j]);
        }
    }
    if (N1 == M2) {
        M3 = M1;
        N3 = N2;
        int mat3[M3][N3];
        for (i = 0; i < M3; i++) {
            for (j = 0; j < N3; j++) {
                mat3[i][j] = 0;
                for (k = 0; k < N2; k++) {
                    mat3[i][j] = mat3[i][j] + (mat1[i][k] * mat2[k][j]);
                }
            }
        }
    printf("Nova matriz:\n");

        for (i = 0; i < M3; i++) {
            for (j = 0; j < N3; j++) {
                printf("%d ", mat3[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("\nMatrizes impossiveis de multiplicar\n");
    }
    return 0;
}
