//Q64. Find the digit that occurs the most times in an integer number.

#include<stdio.h>

int main() {
    long long n;
    int freq[10] = {0}, max_freq = 0, max_digit = 0, digit;
    printf("Enter a number: ");
    scanf("%lld", &n);
    while(n != 0) {
        digit = n % 10;
        freq[digit]++;
        if(freq[digit] > max_freq) {
            max_freq = freq[digit];
            max_digit = digit;
        }
        n /= 10;
    }
    printf("The digit that occurs the most: %d\n", max_digit);
    return 0;
}