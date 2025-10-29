#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &rows, &cols);
    int mat[rows][cols];
    printf("Enter elements of the matrix:\n");
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            scanf("%d", &mat[i][j]);
    printf("Matrix is:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}