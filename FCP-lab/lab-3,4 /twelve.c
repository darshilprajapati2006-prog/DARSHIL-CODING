/*
35.⁠ ⁠READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGITS OF N.
*/

#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        sum = 0;
        while(n > 0) {
            sum += n % 10;
            n = n / 10;
        }
        n = sum;
    } while(n > 9);

    printf("Single digit sum = %d\n", n);

    return 0;
}