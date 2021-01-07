#include <stdio.h>
void fn(int x);

int main()
{
    int myArr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        fn(myArr[i]);
    }

    return 0;
}

void fn(int x)
{
    printf("\n%d", x);
}