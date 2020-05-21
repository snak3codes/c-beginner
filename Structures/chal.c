#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char name[20];
    char hireDate[15];
    float salary;
};

// main function
int main()
{
    // == Declaring and initializing a structure ==
    struct Employee employee = { "Mike", "7/16/15", 48283.99f };

    printf("Name: %s\nHire date: %s\nSalary: %.2f\n", employee.name,
        employee.hireDate, employee.salary);

    printf("\nEnter employee information: \n");
    printf("Name: ");
    scanf("%s", employee.name); // char array, don't need to provide address
    printf("Hire Date: ");
    scanf("%s", employee.hireDate); // char buffer
    printf("Salary: ");
    scanf("%f", &employee.salary);

    printf("\nName: %s\nHire date: %s\nSalary: %.2f\n", employee.name,
        employee.hireDate, employee.salary);

    return 0;
}