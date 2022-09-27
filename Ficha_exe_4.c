#include <stdio.h>
#include <locale.h>

int maior_de_18()
{
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    if(idade >= 18)
        return 1;
    else
        return 0;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    if(maior_de_18() == 1)
        printf("Pode votar :)");
    else
        printf("Nao pode Votar :(");
}