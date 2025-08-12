#include <stdio.h>
#include <string.h>

#define MAX_RECLAMACOES 10 // quantidade máxima de reclamacoes que vamos armazenar
#define TAM_TEXTO 100      // tamanho máximo de cada texto de reclamacao

int main()
{
    char vetReclame[MAX_RECLAMACOES][TAM_TEXTO]; // vetor de strings (aqui cada indice eh uma reclamacao)
    int qtdReclamacoes = 0;                      // Contador de reclamacoes cadastradas

    printf("=== Sistema de Registro de Reclamacoes ===\n");

    // registro detalhado
    int continuar = 1;
    while (continuar && qtdReclamacoes < MAX_RECLAMACOES)
    {
        printf("\nDigite a reclamacao %d: ", qtdReclamacoes + 1);
        getchar(); // Limpa o buffer (evita pular leitura)
        fgets(vetReclame[qtdReclamacoes], TAM_TEXTO, stdin);

        // remove o \n do final
        size_t len = strlen(vetReclame[qtdReclamacoes]);
        if (len > 0 && vetReclame[qtdReclamacoes][len - 1] == '\n')
        {
            vetReclame[qtdReclamacoes][len - 1] = '\0';
        }

        qtdReclamacoes++;

        printf("Deseja registrar outra reclamacao? (1-Sim / 0-Nao): ");
        scanf("%d", &continuar);
    }

    // analise do problema
    printf("\n=== Analisando Reclamacoes ===\n");
    for (int i = 0; i < qtdReclamacoes; i++)
    {
        printf("Problema %d: %s\n", i + 1, vetReclame[i]);
    }

    // verificacao da garantia (simulacao simples)
    int dentroGarantia;
    printf("\nO produto esta dentro da garantia? (1-Sim / 0-Nao): ");
    scanf("%d", &dentroGarantia);

    if (!dentroGarantia)
    {
        printf("\nProduto fora da garantia. Nenhuma acao pode ser feita.\n");
        return 0; // Finaliza o programa
    }

    // priorizacao (simplesmente mostrando indice como prioridade)
    printf("\n=== Priorizando Problemas ===\n");
    for (int i = 0; i < qtdReclamacoes; i++)
    {
        printf("Prioridade %d -> %s\n", i + 1, vetReclame[i]);
    }

    // opcoes de resolucao e comunicacao
    printf("\n=== Escolha de Solucao para cada Problema ===\n");
    for (int i = 0; i < qtdReclamacoes; i++)
    {
        int opcao;
        printf("\nProblema: %s\n", vetReclame[i]);
        printf("Opcoes: 1-Reparo  2-Substituicao  3-Reembolso\nEscolha: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf(">> Reparo registrado para o problema.\n");
            break;
        case 2:
            printf(">> Substituicao registrada para o problema.\n");
            break;
        case 3:
            printf(">> Reembolso registrado para o problema.\n");
            break;
        default:
            printf(">> Opcao invalida.\n");
            break;
        }
    }

    // feedback do cliente
    printf("\n=== Feedback ===\n");
    printf("O cliente ficou satisfeito? (1-Sim / 0-Nao): ");
    int feedback;
    scanf("%d", &feedback);
    if (feedback)
    {
        printf("Cliente satisfeito. Processo finalizado com sucesso.\n");
    }
    else
    {
        printf("Cliente insatisfeito. Reavaliar processo.\n");
    }

    return 0;
}