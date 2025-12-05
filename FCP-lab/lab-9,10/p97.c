#include <stdio.h>

int main() {
    char str[300];
    char *p = str;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (*p != '\0') {
        char ch = *p;
        
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32; // convert uppercase to lowercase
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }

        p++;
    }

    printf("Number of vowels: %d\n", count);

    return 0;
}
