#include <stdio.h>

double get_sum();

int main()
{
    // printf("This is main \n");
    get_sum();
    // printf("This is the final step \n");
}

double get_sum()
{
    int first_number, second_number, sum;
    printf("Enter first number \n");
    scanf("%i", &first_number);
    printf("Enter second number \n");
    scanf("%i", &second_number);

    sum = first_number + second_number;
    printf("The sum of %i + %i = %i \n", first_number, second_number, sum);
}