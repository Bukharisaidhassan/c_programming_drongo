
#include <stdio.h>

double divide(double n1, double n2);

void main()
{
    double y = divide(145.2, 2);
    printf("the resturn is %.2lf \n", y);
}

double divide(double n1, double n2)
{
    double div = n1 / n2;
    return div;
}