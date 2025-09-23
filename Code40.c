//Q40. Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    long long binary, onesComplement = 0;
    int place = 1, digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long temp = binary;

    while (temp > 0) {
        digit = temp % 10;   

        if (digit == 0)
            onesComplement += 1 * place;   
        else if (digit == 1)
            onesComplement += 0 * place;   
        else {
            printf("Invalid binary number.\n");
            return 0;
        }

        temp /= 10;   
        place *= 10;  
    }

    printf("1's complement = %lld\n", onesComplement);

    return 0;
}