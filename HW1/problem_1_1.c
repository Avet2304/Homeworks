#include <stdio.h>

int main() {
    // Declare two integer variables to store the user input
    int num1, num2;

    // Prompt the user to enter two integers in the format "a / b"
    printf("Enter two integers (format: a / b): ");

    // Use scanf to read the two integers (num1 and num2) from the user input
    // Note: The format specifier " %d / %d" expects a number, a space, a '/' character, and another number
    scanf("%d / %d", &num1, &num2);

    // Check if the second number (denominator) is zero to avoid division by zero
    if (num2 == 0) {
        // Print an error message if the second number is zero
        printf("Error: Division by zero is not allowed.\n");
    } else {
        // If denominator is not zero, perform division and print the result with 3 decimal places
        printf("%d / %d = %.3f\n", num1, num2, (float)num1 / num2);
    }

    // Return 0 to indicate the program ran successfully
    return 0;
}

