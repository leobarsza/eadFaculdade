#include <stdio.h>
#include <unistd.h>

int main()
{
    int type, hours = 0, minutes = 0, seconds = 0, timer = 0;

    printf("Definir tempo em horas, minutos ou segundos:\n");
    printf("1 - horas\n");
    printf("2 - minutos\n");
    printf("3 - segundos\n");
    scanf("%d", &type);

    switch (type)
    {
    case 1:
        printf("Digite quantas horas: ");
        scanf("%d", &hours);
        printf("Digite quantos minutos: ");
        scanf("%d", &minutes);
        printf("Digite quantos segundos: ");
        scanf("%d", &seconds);
        break;
    case 2:
        printf("Digite quantos minutos: ");
        scanf("%d", &minutes);
        printf("Digite quantos segundos: ");
        scanf("%d", &seconds);
        break;
    case 3:
        printf("Digite quantos segundos: ");
        scanf("%d", &seconds);
        break;
    default:
        printf("Opcao invalida.\n");
        return 0;
    }

    // Conversão para segundos
    timer = (hours * 3600) + (minutes * 60) + seconds;

    if (timer <= 0)
    {
        printf("Tempo invalido\n");
        return 0;
    }

    printf("\nTempo total: %02d:%02d:%02d\n\n", timer / 3600, (timer % 3600) / 60, timer % 60);

    // Contagem regressiva
    while (timer > 0)
    {
        int h = timer / 3600;
        int m = (timer % 3600) / 60;
        int s = timer % 60;

        printf("\rTempo restante: %02d:%02d:%02d", h, m, s); // \r sobrescreve a linha
        fflush(stdout);                                      // garante que o texto apareça na hora

        sleep(1);
        timer--;
    }

    printf("\rTempo restante: 00:00:00\n");
    printf("Fim do programa\n");
    return 0;
}
