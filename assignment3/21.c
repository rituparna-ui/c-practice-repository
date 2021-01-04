#include <stdio.h>

int main()
{
    char c = 'a';
    if (c == 97 || c == 101 || c == 105 || c == 111 || c == 117)
    {
        printf("Small vowel");
    }
    else if (c >= 65 && c <= 90)
    {
        if (c != 65 || c != 69 || c != 73 || c != 79 || c != 85)
        {
            printf("A capital letter and a consonant");
        }
    }
    else if ((c != 97 || c != 101 || c != 105 || c != 111 || c != 117) || ((c >= 65 && c <= 90) && (c != 65 || c != 69 || c != 73 || c != 79 || c != 85)))
    {
        printf("A character in English but does not fall in the last two categories");
    }
    else
    {
        printf("Not a character in English");
    }

    return 0;
}