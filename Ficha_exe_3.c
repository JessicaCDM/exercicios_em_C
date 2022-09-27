#include <stdio.h>

int main()
{
   int x, y;
   printf("Digite um numero inteiro de 0 a 20: ");
   scanf("%d", &x);
   printf("Digite outro numero inteiro de 0 a 20: ");
   scanf("%d", &y);
    
    if(x == 15 && y == 0)
    printf("A condição é verdadeira");
    else
    printf("A condição é falsa");
}