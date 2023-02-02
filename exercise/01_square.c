#include <stdio.h>

void main()
{
    int num1, ans;
    printf("Square number \n");
    printf("Enter a number \n");
    scanf("%i", &num1);
    ans = num1 * num1;
    printf("The square of %i is %i \n",num1, ans);
}