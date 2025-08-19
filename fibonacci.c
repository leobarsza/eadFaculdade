#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{

    int termo;
    printf("digite o termo..: ");
    scanf("%d", &termo);

    printf("o %d termo de fibonacci eh..: %d\n", termo, fibonacci(termo));

    printf("\n........fim do programa........\n");
    return 0;
}