//Q76. Check if a matrix is symmetric.

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
    
    int is_sym = 1;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(mat[i][j] != mat[j][i]) {
                is_sym = 0;
                break;
            }
        }
        if(is_sym == 0) break;
    }
    
    if(is_sym == 1) {
        printf("Matrix is symmetric\n");
    } else {
        printf("Matrix is not symmetric\n");
    }
    
    return 0;
}