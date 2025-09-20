//Q5. Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

void main()
{
    float CT=0.0;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &CT);

    printf("\nThe given temperature in Fahrenheit is %.2f", ((CT*9/5)+32));
}