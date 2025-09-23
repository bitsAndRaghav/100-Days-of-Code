//Q41. Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, middlePart, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    lastDigit = temp % 10;

    digits = 0;
    while (temp != 0) {
        firstDigit = temp; 
        temp /= 10;
        digits++;
    }

    middlePart = num % (int)pow(10, digits - 1);  
    middlePart /= 10;                             

    swappedNum = lastDigit * (int)pow(10, digits - 1) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit = %d\n", swappedNum);

    return 0;
}