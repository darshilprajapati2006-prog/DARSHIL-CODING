// Q45. A GUESSING GAME
     
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(NULL));
    number = rand() % 100 + 1;

    printf("Guess the number between 1 and 100:\n");

    // For testing: show the actual number (remove this line later if not needed)
    printf("Debug (actual number): %d\n", number);

    while (1) {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Invalid input! Please enter a number.\n");
            continue;
        }

        attempts++;

        if (guess > number)
            printf("Too high! Try again.\n");
        else if (guess < number)
            printf("Too low! Try again.\n");
        else {
            printf("Correct! You guessed the number in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}