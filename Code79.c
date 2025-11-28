//Q79. Perform diagonal traversal of a matrix.

#include<stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int mat[100][100];

    printf("Enter matrix elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int r = 0, c = 0;
    int up = 1;
    printf("Diagonal traversal:\n");

    while (r < m && c < n) {
        printf("%d ", mat[r][c]);

        if (up) {
            if (c == n - 1) {
                r++;
                up = 0;
            } else if (r == 0) {
                c++;
                up = 0;
            } else {
                r--;
                c++;
            }
        } else {
            if (r == m - 1) {
                c++;
                up = 1;
            } else if (c == 0) {
                r++;
                up = 1;
            } else {
                r++;
                c--;
            }
        }

        if (r >= m || c >= n) break;
    }

    return 0;
}