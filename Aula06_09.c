#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num = 0, i = 1;


    while(i != '\0')
    {
        printf("Digite um numero de 1 a 4, para saber o nome de um jogador ou digite 5 para sair: ");
        scanf("%d", &num);

            switch (num)
            {
                case 1:
                    printf("Cristiano Ronaldo");
                    i = 0;
                    break;
                case 2:
                    printf("Messi");
                    i = 0;
                    break;
                case 3:
                    printf("Lewandowski");
                    i = 0;
                    break;
                case 4:
                    printf("Neymar");
                    i = 0;
                    break;
                case 5:
                    i = 0;
                    break;
                default:
                    printf("Nenhuma opção selecionada, por favor repita novamente\n");
                    i = 1;
            }
    }
}