#include <stdio.h>
#include <string.h>

int main() {
    char binary[33];  // Array to store the binary number input by the user (up to 32 bits)
    int decimal = 0;  // Variable to store the decimal equivalent

    // Prompt the user to enter a binary number
    printf("Enter a binary number: ");
    scanf("%s", binary);  // Read the binary string input from the user

    // Get the length of the binary string
    int len = strlen(binary);

    // Loop through each character of the binary string
    for (int i = 0; i < len; i++) {
        // Check if the character is '1'
        if (binary[i] == '1') {
            decimal = (decimal << 1) | 1;  // Shift left and add 1 (equivalent to adding the value of 2^i)
        } 
        // Check if the character is '0'
        else if (binary[i] == '0') {
            decimal = decimal << 1;  // Shift left and add 0 (doesn't change the value)
        } 
        // If the character is neither '1' nor '0', print an error message
        else {
            printf("Invalid binary number.\n");
            return 1;  // Exit the program with an error status
        }
    }

    // Print the decimal equivalent of the binary number
    printf("Decimal equivalent: %d\n", decimal);

    return 0;  // Exit the program successfully
}

