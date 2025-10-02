/*
30.⁠ ⁠PROGRAM TO FIND REVERSE OF A NUMBER.
*/

#include <stdio.h>

int main() {
    int n, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    printf("Reverse of the number = %d\n", reverse);

    return 0;
}