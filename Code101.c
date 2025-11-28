#include<stdio.h>

int main() {
    int n, i, target;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[100];

    printf("Enter sorted array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    for (i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }

    if (first == -1) {
        printf("-1 -1\n");
    } else {
        printf("%d %d\n", first, last);
    }

    return 0;
}