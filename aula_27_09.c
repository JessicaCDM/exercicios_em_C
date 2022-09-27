#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct ficha_de_aluno
    {
        char nome[50];
        int numero_matricula;
        char curso[20];
    };

    struct ficha_de_aluno aluno;

    printf("Nome: ");
    fflush(stdin);
    fgets(aluno.nome, 40, stdin);
    printf("Numero da matricula: ");
    scanf("%d", &aluno.numero_matricula);
    printf("Curso: ");
    fflush(stdin);
    fgets(aluno.curso, 20, stdin);

    printf("Nome ....................: %s", aluno.nome);
    printf("Numero de matricula .....: %d\n", aluno.numero_matricula);
    printf("Curso ...................: %s\n" , aluno.curso);
}