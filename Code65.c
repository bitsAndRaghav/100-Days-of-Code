//Q65. Search in a sorted array using binary search.

#include<stdio.h>

int binarySearch(int arr[], int left, int right, int key) {
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == key) {
            return mid;
        }
        if(arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, key, result, i;
    printf("Enter number of elements (sorted): ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    result = binarySearch(arr, 0, n - 1, key);
    if(result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    return 0;
}