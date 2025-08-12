#include <stdio.h>

int main()
{
    // 1. Declaração da variável de temperatura
    int temperatura;

    // 2. Declaração do ponteiro que aponta para a temperatura
    int *ptrTemperatura;

    // 3. Atribuição de valor inicial à variável temperatura
    temperatura = 25;

    // 4. Fazendo o ponteiro apontar para a variável temperatura
    ptrTemperatura = &temperatura;

    // 5. Exibindo o valor da temperatura usando o ponteiro
    printf("Temperatura medida pelo sensor: %d graus Celsius\n", *ptrTemperatura);

    // 6. (Opcional) Modificando o valor da temperatura via ponteiro
    //*ptrTemperatura = 30;
    scanf("%d", ptrTemperatura);
    printf("Nova temperatura medida pelo sensor: %d graus Celsius\n", temperatura);

    return 0;
}