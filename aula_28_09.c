#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int nPaciente;
    char nome[50];
    char especialidade[20];
    char medico[20];
    int nif;
    char data[11];
} Paciente;

void ImprimePaciente(Paciente P)
{
    printf("Numero paciente......:%d\n", P.nPaciente);
    printf("Nome.................:%s", P.nome);
    printf("Especialidade........:%s", P.especialidade);
    printf("Medico...............:%s", P.medico);
    printf("NIF..................:%d\n", P.nif);
    printf("Data de nascimento...:%s\n", P.data);
}

int main()
{
    Paciente P;
    printf("Numero paciente: ");
    scanf("%d", &P.nPaciente);
    printf("Nome: ");
    fflush(stdin);
    fgets(P.nome, 40, stdin);
    printf("Especialidade: ");
    fflush(stdin);
    fgets(P.especialidade, 20, stdin);
    printf("Medico: ");
    fflush(stdin);
    fgets(P.medico, 20, stdin);
    printf("NIF: ");
    scanf("%d", &P.nif);
    printf("Data de nascimento: ");
    fflush(stdin);
    fgets(P.data, 11, stdin);

    ImprimePaciente(P);
}