//Q19. Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>

void main()
{
    float a, b, c;
    printf ("Enter lengths of three sides of triangle: ");
    scanf ("%f%f%f", &a, &b, &c);

    if ((a==b)&&(b==c)&&(c==a))
    printf ("Equilateral Triangle");
    else if ((a==b)||(b==c)||(a==c))
    printf ("Isosceles Triangle");
    else
    printf ("Scalene Triangle");
}