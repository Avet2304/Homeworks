#include <stdio.h>

// Function to print the binary representation of a number
void printBinary(int num) {
    for (int i = 3; i >= 0; i--) {  // Iterate over the 4 bits (from 3 to 0)
        printf("%d", (num >> i) & 1);  // Shift the bits and print the result (either 0 or 1)
    }
    printf("\n");  // New line after printing the binary representation
}

int main() {
    int num;  // Variable to store the user's input number

    // Prompt user to enter a number between -8 and 7
    printf("Enter a number between -8 and 7: ");
    scanf("%d", &num);  // Read the user's input

    // Check if the number is within the valid range for a 4-bit signed representation
    if (num < -8 || num > 7) {
        printf("Number out of range for 4-bit representation.\n");  // Print an error if the number is out of range
        return 1;  // Exit the program with an error status
    }

    // If the number is negative, convert it to its 2's complement representation
    if (num < 0) {
        num = (1 << 4) + num;  // 2's complement conversion for negative numbers
    }

    // Print the 4-bit binary representation of the number
    printf("4-bit binary: ");
    printBinary(num);  // Call the function to print the binary representation

    return 0;  // Exit the program successfully
}

