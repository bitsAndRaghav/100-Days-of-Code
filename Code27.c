//Q27. Write a program to print the sum of the first n odd numbers.

#include<stdio.h>

void main()
{
    int n=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum=0, i=1;
    for(int t=1; t<=n; t++)
    {
        sum+= i;
        i+= 2;
    }
    printf("Sum of first %d odd numbers = %d", n, sum);
}