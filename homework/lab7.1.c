#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int command;
    char input[100];

    srand(time(NULL)); 

    while (1) {
        printf("Do you want to play game (1=play,-1=exit) :\n");
        fgets(input, sizeof(input), stdin);

        if (sscanf(input, "%d", &command) != 1 || (command != 1 && command != -1)) {
            printf("Please enter only 1 or -1.\n");
            continue;
        }

        if (command == -1) {
            printf("See you again.\n");
            break;
        }

        int score = 100;
        int answer = rand() % 100 + 1;
        int guess;
        int min = 1, max = 100;

        printf("(Score=100)\n");

        while (1) {
            printf("Guess the winning number (%d-%d) :\n", min, max);
            fgets(input, sizeof(input), stdin);

            if (sscanf(input, "%d", &guess) != 1 || guess < min || guess > max) {
                printf("Please enter a number between %d and %d.\n", min, max);
                continue;
            }

            if (guess == answer) {
                printf("That is correct! The winning number is %d.\n", answer);
                printf("Score this game: %d\n", score);
                break;
            } else {
                score -= 10;
                if (guess < answer) {
                    printf("Sorry, the winning number is HIGHER than %d. (Score=%d)\n", guess, score);
                    if (guess + 1 > min) min = guess + 1;
                } else {
                    printf("Sorry, the winning number is LOWER than %d. (Score=%d)\n", guess, score);
                    if (guess - 1 < max) max = guess - 1;
                }
            }
        }
    }

    return 0;
}
