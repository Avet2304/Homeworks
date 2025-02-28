#include <stdio.h>

int main() {
    // Declare variables: N (input number) and sum (to store the sum of multiples)
    int N, sum = 0;

    // Prompt the user to enter a number N in the range of 1 to 1000
    printf("Enter a number N (1-1000): ");
    
    // Read the user's input for N
    scanf("%d", &N);

    // Check if the input is within the valid range (1 to 1000)
    if (N < 1 || N > 1000) {
        // Print an error message if the input is invalid
        printf("Invalid input. N must be between 1 and 1000.\n");
        // Exit the program with an error code (1)
        return 1;
    }

    // Iterate through all numbers from 1 to N-1
    for (int i = 1; i < N; i++) {
        // Check if the number is divisible by 3 or 5
        if (i % 3 == 0 || i % 5 == 0) {
            // Add the number to the sum if it is a multiple of 3 or 5
            sum += i;
        }
    }

    // Output the result: the sum of all multiples of 3 and 5 below N
    printf("The sum of multiples of 3 and 5 below %d is: %d\n", N, sum);

    // Return 0 to indicate successful completion of the program
    return 0;
}

