#include <stdio.h>
void junk(int *i, int j);

int main()
{
    int i = 4, j = 2;
    junk(&i, j);
    printf("\n%d %d", i, j);

    return 0;
}

void junk(int *i, int j)
{
    *i = *i * *i;
    j = j * j;
}