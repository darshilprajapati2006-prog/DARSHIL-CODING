#include <stdio.h>
#include <math.h>

// Function to flip last n digits of a number
int flip(int num, int n) {
    int power = pow(10, n);
    int last = num % power;        // last n digits
    int first = num / power;       // remaining digits

    // reverse last n digits
    int rev = 0, temp = last;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    // combine first part + reversed part
    return first * power + rev;
}

int main() {
    int num, n;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter how many digits to flip: ");
    scanf("%d", &n);

    int result = flip(num, n);

    printf("Flipped number: %d\n", result);

    return 0;
}
