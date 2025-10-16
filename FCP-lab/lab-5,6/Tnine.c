// Q73. REVERSE A STRING USING POINTERS

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    char *ptr1, *ptr2;
    int len, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    ptr1 = str + len - 1;
    ptr2 = rev;

    for (i = 0; i < len; i++) {
        *ptr2 = *ptr1;
        ptr1--;
        ptr2++;
    }

    *ptr2 = '\0';

    printf("\nReversed string: %s\n", rev);

    return 0;
}
