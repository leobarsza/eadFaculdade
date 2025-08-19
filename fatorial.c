#include <stdio.h>

int fatorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fatorial(n - 1);
    }
}

int main()
{
    int num = 5;
    printf("fatorial de %d eh..: %d\n", num, fatorial(num));
    return 0;
}