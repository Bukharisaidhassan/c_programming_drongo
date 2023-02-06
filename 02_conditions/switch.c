#include <stdio.h>
void signup();

void main()
{
    int num;
    printf("Enter a num between 1 and 3 \n");
    scanf("%i", &num);
    switch (num)
    {
    case 1:
        printf("login \n");
        break;

    case 2:
        signup();
        break;

    case 3:
        printf("forgot password \n");
        break;

    default:
        printf("please select the correct option \n");
        break;
    }
    printf("outside \n");
}

void signup()
{
    printf("User signing up \n");
}