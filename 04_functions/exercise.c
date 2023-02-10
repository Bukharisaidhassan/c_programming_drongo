#include <stdio.h>

#define pie 3.142

double sum(double n1, double n2);

void main()
{
    double number, number2;
    printf("Enter a number \n");
    scanf("%lf", &number);

    printf("Enter a number \n");
    scanf("%lf", &number2);

    double x = sum(number, number2);
    printf("ANS is %.2lf \n", x);
}

double sum(double n1, double n2)
{
    double sum = n1 + n2;
    return sum;
}
