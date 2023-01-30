#include <stdio.h>

int price();

void main()
{

    double price1 = 34;
    double price2 = 33;
    double price3 = 37;
    double ans;

    printf("double price \n");

    printf("the value %.2lf \n", price1);
    printf("the value %.2lf \n", price2);
    printf("the value %.2lf \n", price3);

    ans = price1 * price2 * price3;

    printf("answer %.2f \n", ans);

    price();
}

int price()
{
    double price1;
    double price2;
    double price3;
    double ans;

    printf("DOUBLE \n");

    printf("ENTER 1ST NUMBER \n");
    scanf("%lf", &price1);
    printf("enter 2nd number \n");
    scanf("%lf", &price2);
    printf("enter 2rd number \n");
    scanf("%lf", &price3);

    ans = price1 + price2 + price3;

    printf("answer is %.1lf \n", ans);
}