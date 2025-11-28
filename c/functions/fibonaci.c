#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1;
    int *p1 = &a;
    int *p2 = &b;

    for (int i = 0; i < n; i++) {
        printf("%d ", *p1);
        int next = *p1 + *p2;
        *p1 = *p2;
        *p2 = next;
    }
}

int main() {
    int n;

    printf("Enter how many Fibonacci numbers you want: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}