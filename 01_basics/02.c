#include<stdio.h>

void main(){
    int a;
    printf("this is number \n");
    
    scanf("%i", &a);
    printf("%i \n",a);
    


     
    double x;
    printf("Enter a number with a decimal place \n");
    scanf("%lf",&x);
    printf("%.2lf \n", x);

    // 
    char h;
    printf("Enter one character \n");
    scanf("%c", &h);
    printf("%c \n", h);

    // 
    char name[10];
    printf("Enter a name \n");
    scanf("%s", name);
    printf("%s \n", name);



}