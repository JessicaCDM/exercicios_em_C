#include<stdio.h>
#include<stdlib.h>

int main()
{
    int matriz[4][4] = {{45,32,83,95}, {26,14,37,42}, {40,43,65,77}, {74,79,48,55}};
    int i,j;

    for(i = 0; i <= 3; i++)
    {
        for(j = 0; j <= 3; j++)
            printf("%d  ", matriz[i][j]);
        printf("\n");
    }
}