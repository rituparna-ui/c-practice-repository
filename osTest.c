#include <stdio.h>

int main()
{
#ifdef _WIN32
#ifdef _WIN64
    printf("Windows 64 bit\n");
#else
    printf("Windows 32 bit\n");
#endif
#else
    printf("Not a Windows OS\n");
#endif
    return 0;
}