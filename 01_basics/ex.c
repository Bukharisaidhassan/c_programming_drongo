#include <stdio.h>

void main()
{
    printf("loop \n");

    int a, b;

    printf("enter the value a \n");
    scanf("%i", &a);
    printf("enter the value b \n");
    scanf("%i", &b);

    for (int i = a; i < b; i++){
        if (i % 3==0)
        {
            printf("%i is devisible by 3\n", i);
        }else
        {
            printf("%i is not devisible by 3\n", i);
        }
    }
    

        

}
    