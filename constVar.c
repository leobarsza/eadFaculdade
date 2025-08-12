#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

    float nota1, nota2, media;

    printf("nota 1: ");
    scanf("%f", &nota1);

    printf("nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("media: %.2f\n", media);

    printf("Fim do programa\n");
    return 0;
}