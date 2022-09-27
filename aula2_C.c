#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float media_total(float n1,float n2,float n3,float n4)
{
    //função que calcula a média
    float media;
    media = (n1 + n2 + n3 + n4) / 4;
    return media;
}

void aprovado_reprovado(float num, int freque)
{
    //função que avalia se foi aprovado ou não
    if(num >= 10 && freque > 7)
        printf("Aprovado");
    else
        printf("Reprovado");
}

int main()
{
    float nota1, nota2, nota3, nota4, media;
    int frequencia;
    //colocar em português
    setlocale(LC_ALL, "Portuguese");
    //entrada de dados
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);
    printf("Insira a quarta nota: ");
    scanf("%f", &nota4);
    printf("Insira a frequencia do aluno: ");
    scanf("%d", &frequencia);
    //processamento e chamar a função media_total com retorno do valor
    media = media_total(nota1,nota2,nota3,nota4);
    //mostrar a media
    printf("A media é: %.2f\n", media);
    //mostrar a aprovação e chamar a função sem retorno
    aprovado_reprovado(media, frequencia);
}