//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>

void main() {
    float length=0, breadth=0;

    printf("Enter the Length and breadth of the Rectangle: ");
    scanf("%f%f", &length, &breadth);

    printf("\nThe Area of the Rectangle is: %2.1f", length*breadth);
    printf("\nThe Perimeter of the Reactangle is: %2.1f", 2.0*(length+breadth));

}