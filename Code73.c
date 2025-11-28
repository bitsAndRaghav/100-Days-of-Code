//Q73. Find the sum of each row of a matrix and store it in an array.

#include<stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    
    int mat[100][100];
    int row_sum[100];
    
    printf("Enter matrix elements:\n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    for(i=0; i<m; i++) {
        row_sum[i] = 0;
        for(j=0; j<n; j++) {
            row_sum[i] += mat[i][j];
        }
    }
    
    printf("Row sums: ");
    for(i=0; i<m; i++) {
        printf("%d ", row_sum[i]);
    }
    
    return 0;
}