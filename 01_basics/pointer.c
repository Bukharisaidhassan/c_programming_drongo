#include <stdio.h>

void main()
{

    // int *n2;
    // int * n2;
    // int* n2;

    int a = 45;
    int *y = &a; // deaclere variable y as a pointer


    printf("%i \n", a);
    printf("%i \n", *y);

    *y = 75; // change the address to point to 75

    printf("%i \n", a);
    printf("%i \n", *y);
}