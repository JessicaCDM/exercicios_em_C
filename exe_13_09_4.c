#include<stdio.h>
#include<stdlib.h>

int main()
{
    int matriz[3][3];
    int i,j, soma = 0;

    printf("Digite um numero inteiro para a matriz\n");
    for(i = 0; i <= 2; i++)
        for(j = 0; j <= 2; j++)
        {
            printf("Posicao [%d] [%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }

    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j <= 2; j++)
            printf("%d  ", matriz[i][j]);
        printf("\n");
    }

    for(j = 0; j <= 2; j++)
    {
        for(i = 0; i <= 2; i++)
            soma += matriz[i][j];
        printf("\n A soma da coluna e: %d", soma);
        soma = 0;
    }
    printf("\n");
}