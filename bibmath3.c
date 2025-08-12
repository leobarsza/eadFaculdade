#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int x = 1, y = 3, z = 5;
    if (z > y & y > x)
    {
        printf("z eh maior que x e y\n");
    }

    if (z > y | y > x)
    {
        printf("z eh maior que x ou y\n");
    }

    if (!(z < y))
    {
        printf("z n eh maior que y\n");
    }
}