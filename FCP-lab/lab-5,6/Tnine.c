// Q73. ELECTION VOTE COUNT (5 CANDIDATES, COUNT SPOILT BALLOTS)

#include <stdio.h>

int main() {
    int votes[6] = {0};
    int n, i, ballot;
    int spoilt = 0;

    printf("Enter number of votes cast: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid number of votes.\n");
        return 0;
    }

    printf("Enter each vote (candidate number 1-5). Any other number will be counted as spoilt.\n");
    for (i = 0; i < n; i++) {
        if (scanf("%d", &ballot) != 1) {
            int c; while ((c = getchar()) != '\n' && c != EOF); // flush
            printf("Invalid input detected — counting as spoilt.\n");
            spoilt++;
            continue;
        }
        if (ballot >= 1 && ballot <= 5)
            votes[ballot]++;
        else
            spoilt++;
    }

    printf("\nVote Count Summary:\n");
    for (i = 1; i <= 5; i++)
        printf("Candidate %d: %d\n", i, votes[i]);
    printf("Spoilt ballots: %d\n", spoilt);

    return 0;
}
