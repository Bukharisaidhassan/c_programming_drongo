#include <stdio.h>

double sum();

void main()
{
    double x = sum();
    printf("%lf", x);
}

double sum()
{
    double num1, num2;
    printf("sum of numbers \n");
    printf("Enter number \n");
    scanf("%lf", &num1);

    printf("Enter number \n");
    scanf("%lf", &num2);
    return num1 + num1;
}