#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL,"Portuguese");
    
    int jogador = 0, sair = 0;

    while(sair != 1);
    {
        printf("Escolha o melhor jogador de futebol do Mundo: \n");
        printf("1 : Cristiano Ronaldo\n");
        printf("2 : Messi\n");
        printf("3 : Lewandowski\n");
        printf("4 : Neymar\n");
        printf("0 : Sair\n");
        scanf("%d\n",&jogador);
            switch(jogador)
            {
                case 0:
                    sair = 1;
                    break;
                case 1:
                    printf("O melhor jogador do Mundo é: Cristiano Ronaldo");
                    sair = 1;
                    break;
                case 2:
                    printf("O melhor jogador do Mundo é: Messi");
                    sair = 1;
                    break;
                case 3:
                    printf("O melhor jogador do Mundo é: Lewandowski");
                    sair = 1;
                    break;
                case 4:
                    printf("O melhor jogador do Mundo é: Neymar");
                    sair = 1;
                    break;
                default:
                    printf("Opção inválida!\n\n");
                    break;
            }
    } 
}