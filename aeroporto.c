#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char nome[50]; // string com até 49 letras + '\0'
    int numTicket, idade;
    char resposta[4]; // para armazenar "sim" ou "nao"
    bool auxilioEspecial;

    printf("Nome do passageiro: ");
    scanf("%s", nome);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Ticket: ");
    scanf("%d", &numTicket);

    printf("Assistência especial (sim/nao): ");
    scanf("%s", resposta);

    // converter string para booleano
    if (strcmp(resposta, "sim") == 0)
    {
        auxilioEspecial = true;
    }
    else
    {
        auxilioEspecial = false;
    }

    // Exibir os dados
    printf("\n--- Dados do Passageiro ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Ticket: %d\n", numTicket);
    printf("Aux. Especial: %s\n", auxilioEspecial ? "Sim" : "Não");
    if (idade < 18)
    {
        printf("Passageiro menor de idade, não deve embarcar.");
    }

    return 0;
}
