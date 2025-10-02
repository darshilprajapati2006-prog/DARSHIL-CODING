/*
31.⁠ ⁠PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A 'N' DIGIT NO.
*/

#include <stdio.h>

int main() {
    int n, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        remainder = n % 10;
        sum += remainder;
        n = n / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}