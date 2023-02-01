#include <stdio.h>

double get_multi();

double main()
{
    get_multi();
}

double get_multi()
{
    int number1, number2, ans;
    printf("enter 1st number \n");
    scanf("%i", &number1);
    printf("enter 2nd number \n");
    scanf("%i", &number2);

    ans = number1 * number2;

    printf("this is multipilication of %i * %i = %i \n", number1, number2, ans);
    printf("ans is %i \n", ans);
}