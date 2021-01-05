#include <stdio.h>

int main()
{
    int marks[5], sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of student number %d\n", i);
        scanf("%d", &marks[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        sum += marks[j];
    }
    float avg = sum / 5;
    printf("\n%f", avg);

    return 0;
}