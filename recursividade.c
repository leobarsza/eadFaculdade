#include <stdio.h>
#include <math.h>
#include <string.h>

void imprimirNums(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        printf("%d ", n);
        imprimirNums(n - 1);
    }
}

int main()
{
    int num = 100;
    printf("os primeiros %d numeros naturais em ordem decrescente sao..: ", num);

    imprimirNums(num);
    printf("\n");

    printf("fim do programa.............\n");
    return 0;
}