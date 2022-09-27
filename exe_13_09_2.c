#include<stdio.h>
#include<stdlib.h>

int main()
{
    int matriz[3][4] = {{4,7,0,1}, {6,3,8,7}, {5,10,3,0}};
    int i, j;

    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j <= 3; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
}