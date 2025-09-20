//Q4. Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>

void main()
{
    float rad=0.0;
    printf("Enter the radius of the circle: ");
    scanf("%f", &rad);
    printf("\nThe area of the circle is: %.2f", (3.14*rad*rad));
    printf("\nThe perimeter of the circle is: %.2f", (2*3.14*rad));
}