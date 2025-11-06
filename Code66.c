//Q66. Insert an element in a sorted array at the appropriate position.

#include<stdio.h>

int main() {
    int n, i, key, pos, j;
    printf("Enter number of elements (sorted): ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &key);

    pos = n; // Default position to insert at end
    for(i = 0; i < n; i++) {
        if(arr[i] > key) {
            pos = i;
            break;
        }
    }

    for(j = n; j > pos; j--) {
        arr[j] = arr[j-1];
    }
    arr[pos] = key;
    n++; 

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}