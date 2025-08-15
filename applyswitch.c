#include <stdio.h>

int main()
{

    float nota;

    printf("Digite a nota do aluno: ");

    scanf("%f", &nota);

    switch (nota)
    {

    case (nota >= 70):

        printf("Aluno pertence ao Grupo 1.\n");

        break;

    default:

        printf("Aluno pertence ao Grupo 2.\n");

        break;
    }

    return 0;
}