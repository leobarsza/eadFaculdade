#include <stdio.h>
#include <math.h>
#include <string.h>

float calcularSalarioBruto(float vlrHora, float hrsTrabalhadas)
{
    return vlrHora * hrsTrabalhadas;
}

float fgts(float slrBruto)
{
    const float txFgts = 0.08;
    return slrBruto * txFgts;
}

float dctINSS(float slrBruto)
{
    const float inss = 0.07;
    return slrBruto * inss;
}

float slrLiquido(float slrBruto, float descontos)
{
    return slrBruto - descontos;
}
int main()
{
    float vlrHora, hrsTrabalhadas;

    printf("informe o valor da hora..: ");
    scanf("%f", &vlrHora);
    printf("informe as horas trabalhadas..: ");
    scanf("%f", &hrsTrabalhadas);

    float slrBrt = calcularSalarioBruto(vlrHora, hrsTrabalhadas);

    printf("salario bruto..: R$%.2f\n", slrBrt);

    float vlrFgts = fgts(slrBrt);
    printf("fgts..: R$%.2f\n", vlrFgts);

    float descInss = dctINSS(slrBrt);
    printf("inss..: - R$%.2f\n", descInss);

    float liquido = slrLiquido(slrBrt, descInss);
    printf("liquido..: - R$%.2f\n", liquido);

    return 0;
}