#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero inteiro para a tabuada (ou 0 para sair): ");
    scanf("%d", &num);

    while (num != 0)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", num, i, num * i);
        }

        printf("\nDigite outro numero (ou 0 para sair): ");
        scanf("%d", &num);
    }

    printf("Fim do programa\n");
    return 0;
}
