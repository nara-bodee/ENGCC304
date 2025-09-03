#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice;
    int guessnum;
    int answer;
    int score;
    int low;
    int high;

    srand(time(NULL)); 

    while (1) {
        printf("Do you want to play game (1=play,-1=exit): \n");
        if (scanf("%d", &choice) != 1) {
            printf("Please enter only 1 or -1.\n");
        }

        if (choice == 1) {
            score = 100;
            answer = rand() % 100 + 1;
            low = 1;
            high = 100;
            guessnum = -1;

            printf("(Score=100)\n");

            while (guessnum != answer && score > 0) {
                printf("Guess the winning number (%d-%d): \n", low, high);
                if (scanf("%d", &guessnum) != 1) {
                    printf("Please enter a valid number.\n");
                }

                if (guessnum < answer) {
                    score -= 10;
                    printf("Sorry, the winning number is HIGHER than %d. (Score=%d)\n", guessnum, score);
                    if (guessnum + 1 <= high) low = guessnum + 1;
                } else if (guessnum > answer) {
                    score -= 10;
                    printf("Sorry, the winning number is LOWER than %d. (Score=%d)\n", guessnum, score);
                    if (guessnum - 1 >= low) high = guessnum - 1;
                } else {
                    printf("That is correct!\n");
                    printf("The winning number is %d.\n", answer);
                    printf("Score this game: %d\n", score);
                }

                if (score <= 0) {
                    printf("Game over! Your score is 0.\n");
                }
            }
        } else if (choice == -1) {
            printf("See you again.\n");
            break;
        } else {
            printf("Please enter only 1 or -1.\n");
        }
    }

    return 0;
}
