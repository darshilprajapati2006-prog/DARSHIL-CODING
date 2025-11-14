

#include <stdio.h>

int isVowel(char c) {
    if (c >= 'A' && c <= 'Z')
        c += 32;

    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isVowel(ch))
        printf("Vowel\n");
    else
        printf("Not Vowel\n");

    return 0;
}