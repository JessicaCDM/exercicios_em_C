#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int retorno()
{
    int num;
    srand(time(NULL));
    num = rand() % 6;
    return num;
}

int main()
{
    printf("O numero e: %d\n", retorno());
}