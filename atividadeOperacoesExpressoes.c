#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGHT 50
const int CONST_NUM = 100;

int main()
{

    // variaveis primarias
    int num1, num2;
    float num3;
    char str[MAX_STRING_LENGHT];

    // variaveis compostas
    int vetor[3] = {1, 2, 3};            // vetor inicializado com 3 elementos
    int matriz[2][2] = {{1, 2}, {3, 4}}; // matriz 2 por 2 inicializada

    // ponteiros
    int *ptr_num1;

    // atribuicao inicial
    num1 = 10;
    num2 = 20;
    num3 = 15.5;
    strcpy(str, "Exemplo");

    // aribuicao de ponteiro
    ptr_num1 = &num1;

    // Entrada do usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    printf("Digite outro número inteiro: ");
    scanf("%d", &num2);

    printf("Digite um número real: ");
    scanf("%f", &num3);

    printf("Digite uma string: ");
    scanf("%s", str);

    // Operações matemáticas
    int soma = num1 + num2;
    float media = (num1 + num2 + num3) / 3;

    // Operações booleanas
    int resultado_bool = (num1 > num2) && (num3 > CONST_NUM);

    // Exibição dos resultados
    printf("Soma de num1 e num2: %d\n", soma);
    printf("Média dos números: %.2f\n", media);
    printf("Resultado da operação booleana: %d\n", resultado_bool);

    // Exibição dos elementos do vetor
    printf("Elementos do vetor: %d, %d, %d\n", vetor[0], vetor[1], vetor[2]);

    // Exibição dos elementos da matriz
    printf("Elementos da matriz: %d, %d, %d, %d\n", matriz[0][0], matriz[0][1], matriz[1][0], matriz[1][1]);

    // Manipulação e exibição do ponteiro
    printf("Valor de num1: %d\n", *ptr_num1);
    printf("Endereço de num1: %p\n", ptr_num1);
    printf("Endereço de str: %p\n", (void *)&str);

    return 0;
}