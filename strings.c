#include <stdio.h>
#include <string.h>

int main()
{

    char saudacao[] = "Olá";
    char nome[20];

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    strcat(saudacao, nome);
    printf("%s\n", saudacao);

    return 0;
}