#include <stdio.h>

long long fact(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

long long ncr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    printf("NCR = %lld\n", ncr(n, r));

    return 0;
}
