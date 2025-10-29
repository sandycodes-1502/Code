#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &rows, &cols);
    int mat1[rows][cols], mat2[rows][cols], sum[rows][cols], diff[rows][cols];
    printf("Enter elements of first matrix:\n");
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            scanf("%d", &mat1[i][j]);
    printf("Enter elements of second matrix:\n");
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            scanf("%d", &mat2[i][j]);
    
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            diff[i][j] = mat1[i][j] - mat2[i][j];
        }
    printf("Matrix Addition:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    printf("Matrix Subtraction:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }
    return 0;
}