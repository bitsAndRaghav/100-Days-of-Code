//Q74. Find the transpose of a matrix.

#include<stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    
    int mat[100][100];
    int trans[100][100];
    
    printf("Enter matrix elements:\n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            trans[j][i] = mat[i][j];
        }
    }
    
    printf("Transpose:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
