#include <stdio.h>

int main()
{
    // 65-90
    // 97-122
    char a = 'a';
    if (a >= 65 && a <= 90)
    {
        printf("Uppercase");
    }
    else if (a >= 91 && a <= 122)
    {
        printf("Lowercase");
    }
    else
    {
        printf("Not a english character");
    }

    return 0;
}