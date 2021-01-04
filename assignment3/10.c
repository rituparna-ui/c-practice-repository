#include <stdio.h>

int main()
{
    char c = 'k';
    if (c >= 65 && c <= 90)
    {
        printf("Englich character");
    }
    else if (c >= 48 && c <= 57)
    {
        printf("Digit");
    }
    else
    {
        printf("Special character");
    }

    return 0;
}