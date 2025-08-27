#include <stdio.h>
#include <time.h>

// recursivo simples
long long fibonacciSimples(int n)
{
    if (n <= 1)
        return n;
    return fibonacciSimples(n - 1) + fibonacciSimples(n - 2);
}

// com recursividade em cauda
long long fibonacciCaudaAux(int n, long long a, long long b)
{
    if (n == 0)
        return a;
    return fibonacciCaudaAux(n - 1, b, a + b); // chamada em cauda
}

long long fibcauda(int n)
{
    return fibonacciCaudaAux(n, 0, 1);
}

int main()
{
    int valores[] = {10, 20, 30, 35, 40};
    int tamanho = sizeof(valores) / sizeof(valores[0]);
    clock_t inicio, fim;
    double tempo;
    long long resultado;

    printf("comparacao fibonacci recursivo simples x recursivo em cauda\n\n");

    for (int i = 0; i < tamanho; i++)
    {
        int n = valores[i];

        // recursivo simples
        inicio = clock();
        resultado = fibonacciSimples(n);
        fim = clock();
        tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
        printf("fibonacciSimples(%d) = %lld | tempo: %f segundos\n", n, resultado, tempo);

        // recursivo em cauda
        inicio = clock();
        resultado = fibcauda(n);
        fim = clock();
        tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
        printf("fibcauda(%d)   = %lld | tempo: %f segundos\n\n", n, resultado, tempo);
    }

    return 0;
}

/*
===========================SAIDA===========================
comparacao fibonacci recursivo simples x recursivo em cauda

fibsimples(10) = 55 | tempo: 0.000000 segundos
fibcauda(10)   = 55 | tempo: 0.000000 segundos

fibsimples(20) = 6765 | tempo: 0.000000 segundos
fibcauda(20)   = 6765 | tempo: 0.000000 segundos

fibsimples(30) = 832040 | tempo: 0.005000 segundos
fibcauda(30)   = 832040 | tempo: 0.000000 segundos

fibsimples(35) = 9227465 | tempo: 0.048000 segundos
fibcauda(35)   = 9227465 | tempo: 0.000000 segundos

fibsimples(40) = 102334155 | tempo: 0.499000 segundos
fibcauda(40)   = 102334155 | tempo: 0.000000 segundos
*/