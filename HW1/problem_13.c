#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    number = rand() % 100 + 1;

    printf("Guess the number (between 1 and 100):\n");

    // Loop until the user guesses the correct number
    do {
        // Prompt the user to enter their guess
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++; // Increment the number of attempts

        // Provide feedback based on the guess
        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            // If the guess is correct, congratulate the user and show the number of attempts
            printf("Correct! The number was %d.\n", number);
            printf("It took you %d guesses.\n", attempts);
        }
    } while (guess != number); // Repeat the loop until the correct number is guessed

    return 0;
}

