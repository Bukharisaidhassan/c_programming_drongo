#include<stdio.h>
#include<string.h>

typedef struct
{
    char name[15];
    char address[20];
    int ID;
    char job_description[50];
    double salary;
}Employee;


int main()
{
    Employee emp1 = {"John", "Nairobi", 12345, "Developer", 130000.50};

    printf("Name: %s \n",emp1.name);
    printf("HOME ADDRESS: %s \n",emp1.address);
    printf("EMPLOYEE id: %i \n",emp1.ID);
    printf("JD: %s \n",emp1.job_description);
    printf("Salary: %.2lf \n",emp1.salary);

    return 0;
    }
