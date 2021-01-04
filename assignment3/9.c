#include <stdio.h>

int main()
{
    char a = 'R';
    if ((a >= 65 && a <= 90) || (a >= 97 && a <= 112))
    {
        if (a == 65 || a == 69 || a == 73 || a == 79 || a == 85 || a == 97 || a == 101 || a == 105 || a == 111 || a == 117)
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
    }
    else
    {
        printf("Not an english character");
    }

    return 0;
}