#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char str[n][100];
    char *ptr[n];

    // Read strings
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
        ptr[i] = str[i];  // pointer to each string
    }

    // Sorting using pointers
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(ptr[i], ptr[j]) > 0) {
                char *temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }

    // Print sorted strings
    printf("\nStrings in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", ptr[i]);
    }

    return 0;
}
