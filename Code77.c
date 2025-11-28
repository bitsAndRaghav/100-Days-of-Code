//Q77. Check if the elements on the diagonal of a matrix are distinct.

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
    
    int distinct = 1;
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(mat[i][i] == mat[j][j]) {
                distinct = 0;
                break;
            }
        }
        if(distinct == 0) break;
    }
    
    if(distinct == 1) {
        printf("Diagonal elements are distinct\n");
    } else {
        printf("Diagonal elements are not distinct\n");
    }
    
    return 0;
}