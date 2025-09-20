//Q1: Write a program to input two numbers and display their sum.

#include<stdio.h>

void main()
{
    int num1=0, num2=0;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int sum=num1+num2;
    printf("Sum = %d", sum);
}