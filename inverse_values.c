#include <stdio.h>

void trocas(int *a, int *b)
{

int temporaria;
temporaria += *a;
*a = *b;
*b = temporaria;

}

int main()
{
    int x = 10;
    int y = 50;

    printf("Antes: x = %d, y = %d\n", x, y);
    trocas(&x, &y);
    printf("Depois: x = %d, y = %d\n", x, y);

    return 0;

}
