

// Q74. CONCATENATE TWO STRINGS USING POINTERS

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    char *p1 = str1, *p2 = str2;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (*p1 != '\0') {
        p1++;
    }

    while (*p2 != '\0') {
        *p1 = *p2;
        p1++;
        p2++;
    }

    *p1 = '\0';

    printf("\nConcatenated string: %s\n", str1);

    return 0;
}