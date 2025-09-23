//Q39. Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, digit, product = 1, odd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    while (temp != 0) {
        digit = temp % 10;          
        if (digit % 2 != 0) {       
            product *= digit;       
            odd = 1;             
        }
        temp /= 10;                 
    }

    if (odd)
        printf("Product of odd digits of %d = %d\n", num, product);
    else
        printf("%d has no odd digits. Product = 1.\n", num);

    return 0;
}