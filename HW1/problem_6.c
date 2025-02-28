#include <stdio.h>

int main() {
    // Declare variables: 'number' to store the user input and 'isPrime' to track if the number is prime
    int number, isPrime = 1;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    
    // Read the user's input for the number
    scanf("%d", &number);

    // Check if the number is less than or equal to 1, as numbers <= 1 are not prime
    if (number <= 1) {
        isPrime = 0;
    } else {
        // Loop from 2 to the square root of the number to check for factors
        for (int i = 2; i * i <= number; i++) {
            // If a factor is found, set 'isPrime' to 0 (not prime) and break out of the loop
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Output whether the number is prime or not based on the 'isPrime' value
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    // Return 0 to indicate successful program execution
    return 0;
}

