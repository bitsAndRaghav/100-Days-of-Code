// Write a program to swap two numbers without using a third variable.

#include<stdio.h>

void main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping: ");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    a = a + b;  
    b = a - b;  
    a = a - b;  

    printf("\nAfter swapping: \na = %d \nb = %d\n", a, b);

}