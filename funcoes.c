#include <stdio.h>

void tst()
{
    int a, b, c;
    a = 10;
    b = 13;
    c = a * b;
    printf("%d", c);
}

int soma(int a, int b)
{
    return a + b;
}

int main()
{
    // tst();

    int a, b, c;
    a = 10;
    b = 13;
    printf("%d", soma(a, b));
    return 0;
}
