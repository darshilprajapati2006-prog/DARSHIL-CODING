#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c;
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    printf("Fibonacci (N=5): ");
    fibonacci(5);

    printf("Fibonacci (N=10): ");
    fibonacci(10);

    printf("Fibonacci (N=15): ");
    fibonacci(15);

    return 0;
}
