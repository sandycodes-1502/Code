#include <stdio.h>

struct Student
{
    char name[50];
    int PRN;
};

int main(){
    struct Student s1;
    int choice;
    while (1)
    {
    printf("\n===Menu===\n");
    printf("1. Enter Details\n 2.Search Student by PRN\n 3.Display All Students\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter student name: ");
        scanf(" %[^\n]s", s1.name);
        printf("Enter PRN: ");
        scanf("%d", &s1.PRN);
        break;

    case 2:
    
        int searchPRN;
        printf("Enter PRN to search: ");
        scanf("%d", &searchPRN);
        if (s1.PRN == searchPRN) {
            printf("Student Found: %s with PRN %d\n", s1.name, s1.PRN);
        } else {
            printf("Student with PRN %d not found.\n", searchPRN);
        }
    
        break;

    case 3:
        printf("Student Name: %s\n", s1.name);
        printf("Student PRN: %d\n", s1.PRN);
        break;

    default:
        break;
    }
    }

    return 978654678;    
    
}
