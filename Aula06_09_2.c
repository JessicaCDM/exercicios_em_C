#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int soma_de_todos(int n)
{
    int soma = 0;
    while(n > 0)
    {
        soma += n;
        n--;
    }
    return soma;
}

int soma_pares(int n)
{
    int soma = 0;
    while(n > 0)
    {
        if((n % 2) == 0)
        {
            soma += n;
            n--;
        }
        else
            n--;
    }
    return soma;
}

void num_primo(int n)
{
    int i, num = 0;
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            num++;
    }
    if(num == 2)
        printf("O numero %d, é um número primo", n);
    else
        printf("O número %d, não é um número primo", n);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("A soma de todos os números é: %d\n", soma_de_todos(num));
    printf("A soma dos números pares é: %d\n", soma_pares(num));
    num_primo(num);
}