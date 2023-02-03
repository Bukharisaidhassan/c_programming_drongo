#include <stdio.h>

void main()
{

    int volume, surface_area;
    int redius;
    double pie = 22/7;
    printf("Enter a redius \n");
    scanf("%i", &redius);
    surface_area = 4 * pie * redius * redius;
    volume = 4 / 3 * pie * redius * redius * redius;
    printf("surface_area is %i \n", surface_area);
    printf("volume is %i \n", volume);
}