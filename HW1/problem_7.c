#include <stdio.h>

int main() {
    // Declare variables
    int number, original, reversed = 0, remainder;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    
    // Read the input number
    scanf("%d", &number);

    // Store the original number to compare later
    original = number;

    // Reverse the digits of the number
    while (number != 0) {
        remainder = number % 10;               // Get the last digit of the number
        reversed = reversed * 10 + remainder;  // Add the digit to the reversed number
        number /= 10;                          // Remove the last digit from the number
    }

    // Check if the original number is equal to the reversed number
    if (original == reversed) {
        // If they are equal, it's a palindrome
        printf("%d is a palindrome.\n", original);
    } else {
        // If not, it's not a palindrome
        printf("%d is not a palindrome.\n", original);
    }

    // Return 0 to indicate successful execution
    return 0;
}

