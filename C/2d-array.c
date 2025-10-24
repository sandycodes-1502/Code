#include <stdio.h>

// void addition();
// void ATranspose();
// void BTranspose();

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int A[rows][cols];

    printf("Enter elements of the matrix A: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("The Matrix is: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of matrix B: \n");
    int B[rows][cols];
    int C[rows][cols];
    int T[cols][rows];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }
    printf("The Matrix B is: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n======MENU=====\n");
    printf("1. Addition of two matrices\n");
    printf("2. Transpose of matrix A\n");   
    printf("3. Transpose of matrix B\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
             printf("The Addition of two matrices A and B is: \n");
            for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);     
            }
            printf("\n"); 
            }   
            break;

        case 2:
            printf("The Transpose of matrix A is: \n");
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    T[j][i] = A[i][j];
                }
            }
            for (int i = 0; i < cols; i++) {
                for (int j = 0; j < rows; j++) {
                    printf("%d ", T[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:     
            printf("The Transpose of matrix B is: \n");
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    T[j][i] = B[i][j];
                }
            }
            for (int i = 0; i < cols; i++) {
                for (int j = 0; j < rows; j++) {
                    printf("%d ", T[i][j]);
                }
            printf("\n");
            }
            break;

        case 4:
            printf("Exiting the program.\n");  
            return 0; 
            break;
        default:
            printf("Invalid choice. \n");
            break;
    }
    return 0;
}

// int addition(int rows, int cols, int A[rows][cols], int B[rows][cols]){
//     printf("The Addition of two matrices A and B is: \n");
//     int C[rows][cols];
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             C[i][j] = A[i][j] + B[i][j];
//             printf("%d ", C[i][j]);     
//         }
//         printf("\n"); 
//     }
//     return 0;
// }

// int ATranspose(int rows, int cols, int A[rows][cols]){
//     printf("The Transpose of matrix A is: \n");
//     int T[cols][rows];
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             T[j][i] = A[i][j];
//         }
//     }
//     for (int i = 0; i < cols; i++) {
//         for (int j = 0; j < rows; j++) {
//             printf("%d ", T[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;

// }

// int BTranspose(int rows, int cols, int B[rows][cols]){
//     printf("The Transpose of matrix B is: \n");
//     int T[cols][rows];
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             T[j][i] = B[i][j];
//         }
//     }
//     for (int i = 0; i < cols; i++) {
//         for (int j = 0; j < rows; j++) {
//             printf("%d ", T[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;

// }
