//Q29. Write a program to calculate the factorial of a number.

#include<stdio.h>

void main()
{
    int n=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int t=n;
    int factorial=1;
    for(int i=1; i<=t; i++)
    {
        factorial=factorial*i;
    }
    printf("%d! = %d", n, factorial);
    
}