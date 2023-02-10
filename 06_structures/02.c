#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[15];
    char address[20];
    int ID;
    char job_description[50];
    double salary;
} Employee;

int main()
{
    Employee emp1[5] = {"John", "Nairobi", 12345, "Developer", 130000.50};

    for (int i = 0; i < 5; i++)
    {
        printf("Enter details for Employee %i \n", i+1);
        printf("Enter name \n");
        scanf("%s",emp1[i].name);
        printf("Enter house address \n");
        scanf("%s",emp1[i].address);
        printf("Enter ID number \n");
        scanf("%i",&emp1[i].ID);
        printf("Enter Job Description \n");
        scanf("%s",emp1[i].job_description);
        printf("Enter  salary \n");
        scanf("%lf",&emp1[i].salary);
    }

  

    return 0;
}
