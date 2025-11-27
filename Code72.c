//Q72. Find the sum of all elements in a matrix.

#include <stdio.h>
int main() {
    int rows, cols, i, j, sum = 0;
    printf("Enter number of rows and columns:\n");
    scanf("%d%d", &rows, &cols);
    int matrix[rows][cols];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element at position [%d][%d]:\n", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("Sum of all elements: %d\n", sum);
    return 0;
}