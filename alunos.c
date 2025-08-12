#include <stdio.h>

int main()
{

    union dados
    {
        /* data */
        int inteiro;
        float decimal;
    };

    int numeros[5] = {1, 2, 3, 4, 5};

    struct alunos
    {
        /* data */
        char nome[50];
        int idade;
        float mediaNotas;
    };
}