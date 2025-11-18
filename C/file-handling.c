#include <stdio.h>

int main(){
    FILE *file1 = fopen("file.txt", "a");
    int choice;
    printf("Enter choice: \n");
    printf("1. Option 1\n 2. Option 2\n 3. Delete File\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        fprintf(file1, "\nOption 1");
        break;
    case 2:
        fprintf(file1, "\nOption 2");
        break;
    case 3:
        if (remove("file.txt") == 0)
        {
            printf("File Deleted...\n");
        }else{
            printf("Error deleting the file!\n");
        }
        return 0;
    default:
        printf("Error...\n");
        break;
    }
    
    return 0;
}