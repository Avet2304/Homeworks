#include <stdio.h>

int main() {
    // Declare two integer variables for the operands and a character variable for the operator
    int num1, num2;
    char op;

    // Prompt the user to enter an expression in the format "a operator b"
    printf("Enter an expression (format: a / b): ");
    
    // Use scanf to read the two integers (num1 and num2) and the operator (op) from the user input
    scanf("%d %c %d", &num1, &op, &num2);

    // Use a switch statement to check which operator the user has entered
    switch(op) {
        case '/':  // If the operator is division
            // Check if the denominator (num2) is zero to avoid division by zero
            if (num2 == 0) {
                // Print an error message if division by zero is attempted
                printf("Error: Division by zero is not allowed.\n");
            } else {
                // If the denominator is non-zero, perform the division and display the result
                printf("%d / %d = %.3f\n", num1, num2, (float)num1 / num2);
            }
            break;  // End of case for division
        default:  // If the operator is not recognized
            // Print an error message for unsupported operators
            printf("Error: Unsupported operator.\n");
    }

    // Return 0 to indicate successful program execution
    return 0;
}

