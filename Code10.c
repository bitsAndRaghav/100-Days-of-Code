//Q10. Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int total, h, m, s;

    printf("Input seconds: ");
    if (scanf("%d", &total) != 1) 
    {
        return 1;
    }

    if (total < 0) 
        total = -total;

    h = total / 3600;         
    m = (total % 3600) / 60;       
    s = total % 60;                

    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}
