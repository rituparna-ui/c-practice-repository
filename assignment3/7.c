#include <stdio.h>

int main()
{
    // 65-122
    char a = 'R';
    if ((a >= 65 && a <= 90) || (a >= 91 && a <= 122))
    {
        printf("It is a englich character");
    }
    else
    {
        printf("it is not a english character");
    }

    return 0;
}