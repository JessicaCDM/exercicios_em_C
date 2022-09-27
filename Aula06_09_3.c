#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float deposito(float n, float num)
{
    float soma = num;
    soma += n;

    return soma;
}

float saque(float n, float num)
{
    float subtracao = num;
    subtracao -= n;

    return subtracao;
}

int main()
{
    float valor = 0, valor_total = 0;
    int num = 0, i = 0;
    setlocale(LC_ALL, "Portuguese");

    do
    {
        printf("Digite o que queres fazer:\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Saque\n");
        printf("3 - Depósito\n");
        printf("0 - Sair\n");
        scanf("%d", &num);
       
            switch(num)
            {
                case 0:
                    i = 0;
                    break;
                case 1:
                    printf("O seu valor é: %.2f\n", valor);
                    i = 1;
                    break;
                case 2:
                    valor_total = valor;
                    printf("Qual é a quantia de saque: ");
                    scanf("%f", &valor);
                    printf("Saque feito, valor atual é: %.2f\n", saque(valor, valor_total));
                    i = 1;
                    break;
                case 3:
                    valor_total = valor;
                    printf("Qual é a quantia do depósito: ");
                    scanf("%f", &valor);
                    printf("Depósito feito, valor atual é: %.2f\n", deposito(valor, valor_total));
                    i = 1;
                    break;
                default:
                    break;
            }
    } while (i != 0);
}