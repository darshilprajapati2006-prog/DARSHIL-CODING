//  proram 24 : write a c program to calculate the value of y

#include <stdio.h>
#include <math.h>
int main() {
    int x, n;
    float y;

    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of n: ");
    scanf("%d", &n);

    if(n == 1) {
        y = 1 + x;
    }
    else if(n == 2) {
        y = 1 + (float)x / n;
    }
    else if(n == 3) {
        y = 1 + pow(x, n);
    }
    else {
        y = 1 + n * x;
    }

    printf("Value of Y(x,n) = %.2f\n", y);
    return 0;
}