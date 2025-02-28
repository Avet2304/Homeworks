#include <stdio.h>

int main() {
    // Declare variables: 'number' to store the user input, and 'sum' to store the sum of the digits
    int number, sum = 0;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    
    // Read the user's input for the number
    scanf("%d", &number);

    // Handle negative numbers by converting them to positive
    number = (number < 0) ? -number : number;

    // Loop through each digit of the number
    while (number > 0) {
        // Add the last digit (obtained by modulus 10) to the sum
        sum += number % 10;
        
        // Remove the last digit by dividing the number by 10
        number /= 10;
    }

    // Output the result: the sum of the digits
    printf("The sum of the digits is: %d\n", sum);

    // Return 0 to indicate successful program execution
    return 0;
}

