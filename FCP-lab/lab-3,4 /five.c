/*
28.⁠ ⁠PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT.
*/

#include <stdio.h>

int main() {
    int n, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n > 0) {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder*remainder);
        n = n / 10;
    }

    if(sum == original)
        printf("%d is an Armstrong Number.\n", original);
    else
        printf("%d is Not an Armstrong Number.\n", original);

    return 0;
}