#include <stdio.h>

void main()
{
    int number;
    printf("Enter a number \n");
    scanf("%i",&number);
    for (int i = 0; i <= number; i++)
    {
        printf("%i \n", i);
    }
}