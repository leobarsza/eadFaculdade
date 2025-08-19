#include <stdio.h>

int fatTail(int n, int result)
{
    if (n == 0 || n == 1)
    {
        return result;
    }
    else
    {
        return fatTail(n - 1, n * result);
    }
}

int fatorial(int n)
{
    return fatTail(n, 1);
}

int main()
{
    int num = 5;
    printf("fatorial de %d eh..: %d\n", num, fatorial(num));
    return 0;
}