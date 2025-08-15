#include <stdio.h>

int main()
{
    int qtdAtual = 100, qtdMinima = 50;

    printf("CONTROLE DE ESTOQUE:\n");

    while (qtdAtual > qtdMinima)
    {
        printf("Quantidade Atual: %d\n", qtdAtual);
        printf("Quantidade a ser atualizada (ou 0 para sair): ");

        int att;
        scanf("%d", &att);

        if (att == 0)
        {
            printf("Saindo...\n");
            break;
        }
        else if (att < 0)
        {
            qtdAtual += att; // somar negativo = subtrair
            printf("Estoque atualizado com decremento\n");
        }
        else
        {
            qtdAtual += att;
            printf("Estoque atualizado com adicao\n");
        }
    }

    printf("Fim do programa\n");
    return 0;
}
