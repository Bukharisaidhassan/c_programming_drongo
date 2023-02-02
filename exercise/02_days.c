#include <stdio.h>

void main()
{
    int number, a_year = 365, a_week = 7, years, weeks, days;
    printf("Enter of number days \n");
    scanf("%i", &number);

    years = number / a_year;
    // printf("%i has %i years \n", number, years);

    weeks = (number % a_year) / a_week;
    // printf(" weeks %i \n", weeks);

    days = (number % a_year) % a_week;
    // printf(" days %i \n", days);

    printf("%i has %i years %i weeks %i days", number, years, weeks, days);
}