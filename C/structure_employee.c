#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

struct employee
{
    int empID;
    char name[50];
    float salary;
    struct date joiningDate;
};

int main()
{
    struct employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.empID);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    printf("\n===== Employee Details =====\n");
    printf("Employee ID: %d\n", emp.empID);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d/%02d/%04d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}