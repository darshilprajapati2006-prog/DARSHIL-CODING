#include <stdio.h>

enum Color {
    RED = 1,
    GREEN,
    BLUE,
    YELLOW,
    WHITE,
    BLACK
};

int main() {
    enum Color c;
    
    printf("Choose a color:\n");
    printf("1. RED\n2. GREEN\n3. BLUE\n4. YELLOW\n5. WHITE\n6. BLACK\n");
    printf("Enter choice (1-6): ");
    scanf("%d", &c);

    switch (c) {
        case RED:
            printf("Hex code: #FF0000\n");
            break;
        case GREEN:
            printf("Hex code: #00FF00\n");
            break;
        case BLUE:
            printf("Hex code: #0000FF\n");
            break;
        case YELLOW:
            printf("Hex code: #FFFF00\n");
            break;
        case WHITE:
            printf("Hex code: #FFFFFF\n");
            break;
        case BLACK:
            printf("Hex code: #000000\n");
            break;
        default:
            printf("Invalid color choice!\n");
    }

    return 0;
}
