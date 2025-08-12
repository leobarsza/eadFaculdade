#include <stdio.h>
#include <math.h>
#include <string.h>

struct Aluno
{
    char nome[50];
    int idade;
    float mediaNotas;
};

int main()
{

    struct Aluno aluno1;

    strcpy(aluno1.nome, "Leonardo");
    aluno1.idade = 26;
    aluno1.mediaNotas = 9.8;

    printf("Nome.........: %s\n", aluno1.nome);
    printf("Idade........: %d\n", aluno1.idade);
    printf("Media........: %f\n", aluno1.mediaNotas);

    printf("Fim do programa!\n");
    return 0;
}