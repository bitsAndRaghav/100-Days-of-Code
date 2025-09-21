//Q28. Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>

void main()
{
    int n=0;
    printf ("Enter the value of n: ");
    scanf ("%d", &n);

    int product=1;
    for (int i=2; i<=n; i+=2)
    {
        product*=i;
    }
    printf("Product of even numbers from 1 to %d = %d", n, product);
}