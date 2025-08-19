#include <stdio.h>

int main()
{
    float nota, soma = 0;
    float maior = -1, menor = 11; // notas de 0 a 10
    int total = 0, aprovados = 0, reprovados = 0;

    printf("digite as notas dos alunos (-1 para sair):\n");

    // leitura das notas usando while
    while (1)
    {
        printf("nota: ");
        scanf("%f", &nota);

        if (nota == -1)
        {
            break; // finaliza
        }

        // validacao de entrada
        if (nota < 0 || nota > 10)
        {
            printf("nota invalida! digite um valor entre 0 e 10.\n");
            continue; // volta para o início do loop
        }

        // soma e contagem
        soma += nota;
        total++;

        // maior e menor
        if (nota > maior)
            maior = nota;
        if (nota < menor)
            menor = nota;

        // contagem de aprovados e reprovados
        if (nota >= 6)
        {
            aprovados++;
        }
        else
        {
            reprovados++;
        }
    }

    // exibe resultados apenas se houver alunos
    if (total > 0)
    {
        float media = soma / total;
        printf("\nresultados:\n");
        printf("media da turma: %.2f\n", media);
        printf("maior nota: %.2f\n", maior);
        printf("menor nota: %.2f\n", menor);
        printf("aprovados: %d\n", aprovados);
        printf("reprovados: %d\n", reprovados);

        // pequeno uso de 'for' para mostrar índice de alunos simulados
        printf("\níndice dos alunos (1 ate %d):\n", total);
        for (int i = 1; i <= total; i++)
        {
            printf("aluno %d\n", i);
        }

        // exemplo de uso do-while
        int opcao;
        do
        {
            printf("\ndigite 1 para ver a media novamente ou 0 para sair: ");
            scanf("%d", &opcao);
            if (opcao == 1)
            {
                printf("media da turma: %.2f\n", media);
            }
        } while (opcao != 0);
    }
    else
    {
        printf("\nnenhuma nota valida foi inserida.\n");
    }

    return 0;
}
