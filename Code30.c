//Q30. Write a program to reverse a given number.
#include<stdio.h>

void main()
{
    int num=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Original = %d", num);

    int remainder, reverse=0;
    while(num != 0)
    {
        remainder=num%10;
        reverse=reverse*10 + remainder;
        num=num/10;
    }
    printf("\nReverse = %d", reverse);
}
