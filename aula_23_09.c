#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    int num = 0;
    int *p;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if (num <= MAX)
        printf("A raíz quadrada é: %2.f\n", sqrt(num));
    else
        printf("Número maior que 100\n");
    
    p = &num;
    printf("Conteudo da variavel número: %d\n", num);
    printf("Conteudo da variavel ponteiro: %d\n", *p);
    printf("Endereco da variavel ponteiro: %p\n", p);
    printf("Endereco da variavel valor: %p\n", &num);
    
    FILE*arq;
    char palavra[30];
    
    arq = fopen("teste.rtf", "w");
    printf("Escreva qualquer coisa: ");
    scanf("%s", palavra);
    fprintf(arq, " Palavra: %s\n", palavra);
    fclose(arq);
}