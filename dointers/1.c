#include <stdio.h>
void junk(int *x, int *y);

int main()
{
    int i = 5, j = 2;
    junk(&i, &j);
    printf("\n%d %d", i, j);

    return 0;
}

void junk(int *x, int *y)
{
    *x = *x * *x;
    *y = *y * *y;
}