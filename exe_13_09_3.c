#include<stdio.h>
#include<stdlib.h>

int main()
{
    int matriz[6][6];
    int i,j;

    printf("Digite um numero inteiro para a matriz\n");
    for(i = 0; i <= 5; i++)
        for(j = 0; j <= 5; j++)
        {
            printf("Posicao [%d] [%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    
    for(i = 0; i <= 5; i++)
    {
        for(j = 0; j <= 5; j++)
            printf("%d  ", matriz[i][j]);
        printf("\n");
    }
}