//Q16. Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>

void main()
{
    int a=0, b=0, c=0;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a>=b) {
        if (a>=c)
            printf("%d is the largest.", a);
        else
            printf("%d is the largest.", c);
    }
    else {
        if (b>=c)
            printf("%d is the largest.", b);
        else
            printf("%d is the largest.", c);
    }
}