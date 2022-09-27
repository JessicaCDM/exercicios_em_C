#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    //variáveis
    int N1, N2;

    printf("Digite primeiro numero: ");
    scanf("%d", &N1);

    printf("Digite o segundo numero: ");
    scanf("%d", &N2);

    if (N1 == N2)
        printf("Os numeros são iguais!");
    else
        if(N1 > N2)
            printf("O maior valor é = %d", N1);
        else
            printf("O maior valor é = %d", N2);

printf("\n");

return 0;
}

