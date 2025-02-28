#include <stdio.h>

int main() {
    int low = 1, high = 100, guess, response;

    printf("Think of a number between 1 and 100 and I'll try to guess it.\n");
    printf("Please answer the following questions with '1' for 'too high', '2' for 'too low', or '3' for 'correct'.\n");

    int attempts = 0;
    while (low <= high) {
        attempts++;
        guess = (low + high) / 2;
        printf("Is your number %d?\n", guess);
        printf("Enter 1 if it's too high, 2 if it's too low, and 3 if it's correct: ");
        scanf("%d", &response);

        if (response == 1) {
            high = guess - 1;
        } else if (response == 2) {
            low = guess + 1;
        } else if (response == 3) {
            printf("Yay! I guessed your number %d in %d attempts.\n", guess, attempts);
            break;
        } else {
            printf("Invalid input. Please enter 1, 2, or 3.\n");
        }
    }

    return 0;
}

