

// Q75. COMPARE TWO STRINGS USING POINTERS

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    char *p1 = str1, *p2 = str2;
    int flag = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (*p1 != '\0' && *p2 != '\0') {
        if (*p1 != *p2) {
            flag = 1;
            break;
        }
        p1++;
        p2++;
    }

    if (flag == 0 && *p1 == '\0' && *p2 == '\0')
        printf("\nStrings are equal.\n");
    else
        printf("\nStrings are not equal.\n");

    return 0;
}