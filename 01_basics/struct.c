#include<stdio.h>
#include<string.h>

struct student 
{
    char name[50];
    int class;
    char section;
} student1;
int main()
{
    // created variable student1 for structures student 
    struct student student1 = {"drongo", 1, 'A'};
    // printing value
    printf("studen name : %s\n", student1.name);
    printf("studen class : %s\n", student1.class);
    printf("studen section : %s\n", student1.section);

    return 0;
    }
