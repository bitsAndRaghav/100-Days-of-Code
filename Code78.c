//Q78. Find the sum of main diagonal elements for a square matrix.

#include<stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of rows (= columns for square matrix): ");
    scanf("%d", &n);
    
    int mat[100][100];
    
    printf("Enter matrix elements:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    int sum = 0;
    for(i=0; i<n; i++) {
        sum += mat[i][i];
    }
    
    printf("Sum of main diagonal elements: %d\n", sum);
    
    return 0;
}