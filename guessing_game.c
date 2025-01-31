#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Seed the random number generator
    srand(time(0));
    number = rand() % 100 + 1; // Generate a random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100. Can you guess it?\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Lower number please.\n");
        } else if (guess < number) {
            printf("Higher number please.\n");
        } else {
            printf("Congratulations! You guessed the correct number %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number);

    return 0;
}