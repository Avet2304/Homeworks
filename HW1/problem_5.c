#include <stdio.h>

int main() {
    // Declare variables: 'number' to store the user input, and 'reversed' to store the reversed number
    int number, reversed = 0;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    
    // Read the user's input for the number
    scanf("%d", &number);

    // Loop through each digit of the number and build the reversed number
    while (number != 0) {
        // Take the last digit of 'number' and add it to 'reversed' after shifting 'reversed' left by one digit
        reversed = reversed * 10 + number % 10;
        
        // Remove the last digit from 'number' by dividing it by 10
        number /= 10;
    }

    // Output the result: the reversed number
    printf("The inverse of the number is: %d\n", reversed);

    // Return 0 to indicate successful program execution
    return 0;
}

