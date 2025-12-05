#include <stdio.h>

// A. COPY one string into another
void str_copy(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// B. COMPARE two strings
// returns 0 if equal, +ve if s1 > s2, -ve if s1 < s2
int str_compare(char *s1, char *s2) {
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2)
            return *s1 - *s2;
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

// C. CONCAT two strings
void str_concat(char *s1, char *s2) {
    while (*s1 != '\0') {
        s1++;
    }
    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}

// D. REVERSE a string
void str_reverse(char *s) {
    int len = 0;
    while (s[len] != '\0') len++;

    int i = 0, j = len - 1;
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char s1[100], s2[100], result[200];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    // A. COPY
    str_copy(result, s1);
    printf("\nCopied string: %s\n", result);

    // B. COMPARE
    int cmp = str_compare(s1, s2);
    if (cmp == 0)
        printf("Strings are equal\n");
    else if (cmp > 0)
        printf("First string is greater\n");
    else
        printf("Second string is greater\n");

    // C. CONCAT
    str_copy(result, s1);
    str_concat(result, s2);
    printf("Concatenated string: %s\n", result);

    // D. REVERSE
    str_copy(result, s1);
    str_reverse(result);
    printf("Reversed first string: %s\n", result);

    return 0;
}
