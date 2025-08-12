#include <stdio.h>

#define TAXA_JUROS 0.05 // 5%

int main()
{
    // variaveis do investimento
    float valorInicial, valorFinal;
    int anos;

    // entrada de dados
    printf("Digite o valor inicial do investimento: ");
    scanf("%f", &valorInicial);

    printf("Digite o numero de anos: ");
    scanf("%d", &anos);

    // calculo de juros simples
    valorFinal = valorInicial * (1 + (TAXA_JUROS * anos));

    // exibe o resultado
    printf("Valor final do investimento: %.2f\n", valorFinal);

    // vetor e matriz
    int vetor[3] = {10, 20, 30};
    int matriz[2][2] = {{1, 2}, {3, 4}};

    // ponteiro para o primeiro elemento do vetor
    int *ptr = &vetor[0];
    *ptr = 100; // modifica o primeiro elemento

    // exibe vetor
    printf("\nVetor:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Elemento %d: %d (Endereco: %p)\n", i, vetor[i], (void *)&vetor[i]);
    }

    // exibe matriz
    printf("\nMatriz:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Elemento [%d][%d]: %d (Endereco: %p)\n", i, j, matriz[i][j], (void *)&matriz[i][j]);
        }
    }

    return 0;
}
