//Q26. Write a program to print numbers from 1 to n.

#include<stdio.h>

void main()
{
    int n=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i;
    for (i=1; i <=n; i++)
    {
        printf ("%d\n", i);

    }
}