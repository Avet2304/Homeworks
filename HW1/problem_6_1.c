#include <stdio.h>

int main() {
    // Declare the variable N for the input number and isPrime to check if a number is prime
    int N, isPrime;

    // Prompt the user to enter a number N
    printf("Enter a number N: ");
    
    // Read the user input into variable N
    scanf("%d", &N);

    // Loop through numbers from 2 to N to check each number for primality
    for (int num = 2; num <= N; num++) {
        isPrime = 1;  // Assume the number is prime initially

        // Check if the number has any divisors other than 1 and itself
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;  // Set isPrime to 0 if a divisor is found
                break;         // Exit the loop once a divisor is found
            }
        }

        // If the number is prime, print it
        if (isPrime) {
            printf("%d ", num);
        }
    }

    // Print a newline for output formatting
    printf("\n");

    // Return 0 to indicate successful program execution
    return 0;
}

