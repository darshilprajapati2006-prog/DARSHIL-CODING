

#include <stdio.h>

void printNum(int n) {
    if (n == 0) return;      // base case

    printf("%d\n", n);       // decreasing part
    printNum(n - 1);         // recursive call
    printf("%d\n", n);       // increasing part
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printNum(n);

    return 0;
}

