//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>

void main()
{
    int num1=0, num2=0;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int sum=num1+num2;
    printf("\nSum = %d", sum);
    int difference=num1-num2;
    printf("\nDifference = %d", difference);
    int product=num1*num2;
    printf("\nProduct = %d", product);
    int quotient=num1/num2;
    printf("\nQuotient = %d", quotient);

}
