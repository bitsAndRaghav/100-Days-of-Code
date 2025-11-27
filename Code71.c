//Q71. Read and print a matrix.

#include <stdio.h>
int main() {
    int rows, cols, i, j;
    printf("Enter number of rows and columns:\n");
    scanf("%d%d", &rows, &cols);
    int matrix[rows][cols];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element at position [%d][%d]:\n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}