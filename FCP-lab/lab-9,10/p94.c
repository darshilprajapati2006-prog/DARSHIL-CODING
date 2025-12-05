#include <stdio.h>

int main() {
    char str[200], rev[200];
    char *p = str;
    char *r = rev;
    int len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length
    while (*(p + len) != '\0' && *(p + len) != '\n') {
        len++;
    }

    // Reverse copy
    for (int i = 0; i < len; i++) {
        *(r + i) = *(p + (len - 1 - i));
    }

    *(r + len) = '\0';  // Null terminate

    printf("Reversed string: %s\n", rev);

    return 0;
}
