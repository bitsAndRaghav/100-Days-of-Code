//Q69. Find the second largest element in an array.

#include<stdio.h>

int main() {
    int n, i;
    int max, second_max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = second_max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if(arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }
    printf("Second largest element: %d\n", second_max);
    return 0;
}