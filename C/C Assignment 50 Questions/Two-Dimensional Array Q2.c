#include <stdio.h>
int main() {
    int rows, cols, sum=0;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &rows, &cols);
    int mat[rows][cols];
    printf("Enter elements of the matrix:\n");
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            scanf("%d", &mat[i][j]);
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            sum += mat[i][j];
    printf("Sum of all elements = %d\n", sum);
    return 0;
}