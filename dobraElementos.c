#include <stdio.h>

void dobrar_elementos(int *arr, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        arr[i] *= 2;
    }
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    dobrar_elementos(nums, 5);
    printf("Array dobrado..: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}