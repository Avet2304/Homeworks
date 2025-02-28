#include <stdio.h>

int main() {
    int num1, num2;

    // Ask the user to input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the number of digits in num2
    int temp = num2;  // Make a copy of num2 for manipulation
    int digits = 0;   // Variable to count the number of digits in num2
    while (temp != 0) {
        digits++;        // Increment digit count
        temp /= 10;      // Remove the last digit from temp
    }

    // Concatenate num1 and num2 by shifting num1 to the left by the number of digits in num2
    int result = num1;    // Start with num1
    for (int i = 0; i < digits; i++) {
        result *= 10;      // Shift num1 left by multiplying by 10 for each digit in num2
    }
    result += num2;       // Add num2 to the shifted num1 to complete the concatenation

    // Output the concatenated result
    printf("The concatenated number is: %d\n", result);

    return 0;
}

