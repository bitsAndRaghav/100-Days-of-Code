//Q8. Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>

void main() {
    int n=0;
    printf("Enter n: ");
    scanf("%d", &n);

    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("The sum of first %d natural numbers is: %d", n,sum);
}