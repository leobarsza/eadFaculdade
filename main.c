#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool chovendo;

    chovendo = true;

    printf("esta chovendo? %s\n", chovendo ? "sim" : "nao");

    return 0;
}