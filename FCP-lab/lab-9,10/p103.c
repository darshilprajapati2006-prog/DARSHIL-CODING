#include <stdio.h>

#define BIG(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("The biggest number is: %d\n", BIG(x, y));

    return 0;
}
