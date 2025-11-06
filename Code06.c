//Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main() {
    int a=0.0, b=0.0, c=0.0;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    printf("\nBefore swapping: ");
    printf("\na = %d", a);
    printf("\nb = %d", b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swapping: ");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    return 0;
}