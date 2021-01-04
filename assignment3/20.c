#include <stdio.h>

int main()
{
    float marks;
    char grade;
    printf("Enter marks\n");
    scanf("%f", &marks);
    if (marks > 100 )
    {
        grade = 'x';
    }
    else if(marks < 0)
    {
        grade = 'x';
    }

    return 0;
}