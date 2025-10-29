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
    
    for(int i=0; i<rows; i++) {
        int rowSum=0;
        for(int j=0; j<cols; j++)
            rowSum += mat[i][j];
        printf("Sum of row %d = %d\n", i+1, rowSum);
    }
    
    for(int j=0; j<cols; j++) {
        int colSum=0;
        for(int i=0; i<rows; i++)
            colSum += mat[i][j];
        printf("Sum of column %d = %d\n", j+1, colSum);
    }
    return 0;
}
