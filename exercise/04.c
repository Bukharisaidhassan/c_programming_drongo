#include <stdio.h>

void main()
{
    int number, a_year = 365, a_week = 7, years, weeks, days;
    printf("Enter a number of days \n");
    scanf("%i", &number);

    years = number / a_year;
    weeks = (number % a_year) / a_week;
    days = (number % a_year) % a_week;

    printf("%i has %i years  %i weeks %i days", number, years, weeks, days);
}