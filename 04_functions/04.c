#include<stdio.h>
 
double divide();

void main()
{
    double y = divide();
    printf("the resturn is %.2lf", y);

}

double divide()
{
    double x,y;
    printf("Division number \n");
    printf("Enter 1st number\n");
    scanf("%lf",&x);
    printf("%.2lf\n",x);
    printf("Enter 2nd number\n");
    scanf("%lf", &y);
    printf("%.2lf \n",y);
    return x * y;

}