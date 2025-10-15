#include <stdio.h>

int main(){
    char str1[100], str2[100], result[200], copy[100];
    int choice, i, j, flag;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    do {
        printf("\n======MENU=====\n");
        printf("1. Concatenate two strings\n");
        printf("2. Copy string\n");
        printf("3. Compare two strings\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        switch (choice) {
            case 1:
                i = 0;
                while (str1[i] != '\0') {
                    result[i] = str1[i];
                    i++;
                }
                j = 0;
                while (str2[j] != '\0') {
                    result[i] = str2[j];
                    i++;
                    j++;
                }
                result[i] = '\0';
                printf("Concatenated String: %s\n", result);
                break;
            case 2:
                i = 0;
                while (str1[i] != '\0') {
                    copy[i] = str1[i];
                    i++;
                }
                copy[i] = '\0';
                printf("Copied String: %s\n", copy);
                break;
            case 3:
                i = 0;
                flag = 0;
                while (str1[i] != '\0' || str2[i] != '\0') {
                    if (str1[i] != str2[i]) {
                        flag = 1;
                        break;
                    }
                    i++;
                }
                if (flag == 0) {
                    printf("Strings are equal.\n");
                } else {
                    printf("Strings are not equal.\n");
                }
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } 
    while (choice != 4);
}