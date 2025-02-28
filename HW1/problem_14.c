#include <stdio.h>

int main() {
    int low = 1, high = 100, guess, response;

    // Prompt the user to think of a number between 1 and 100
    printf("Think of a number between 1 and 100 and I'll try to guess it.\n");
    printf("Please answer the following questions with '1' for 'too high', '2' for 'too low', or '3' for 'correct'.\n");

    int attempts = 0;  // Initialize the number of attempts
    while (low <= high) {
        attempts++;  // Increment the number of attempts

        // Calculate the middle of the current range to guess the number
        guess = (low + high) / 2;
        printf("Is your number %d?\n", guess);
        printf("Enter 1 if it's too high, 2 if it's too low, and 3 if it's correct: ");
        
        // Get the user's response
        scanf("%d", &response);

        // Check the user's response
        if (response == 1) {
            // If the guess is too high, adjust the range by setting the high boundary to one less than the guess
            high = guess - 1;
        } else if (response == 2) {
            // If the guess is too low, adjust the range by setting the low boundary to one more than the guess
            low = guess + 1;
        } else if (response == 3) {
            // If the guess is correct, print the result and the number of attempts
            printf("Yay! I guessed your number %d in %d attempts.\n", guess, attempts);
            break;  // Exit the loop as the number has been guessed
        } else {
            // If the user enters an invalid response, prompt for a valid input
            printf("Invalid input. Please enter 1, 2, or 3.\n");
        }
    }

    return 0;
}

