#include <stdio.h>
#include <stdlib.h>

int main() {
    // Open the current source file in read mode
    FILE *file = fopen(__FILE__, "r");
    
    // Check if the file was opened successfully
    if (file == NULL) {
        perror("Error opening file"); // If the file could not be opened, print an error message
        return 1; // Exit the program with an error code
    }

    char ch; // Variable to store each character read from the file
    int row = 1, col = 0; // Variables to track the current row and column in the file

    printf("Locations of parentheses in file:\n");

    // Loop through the file character by character
    while ((ch = fgetc(file)) != EOF) {
        col++; // Increment the column count for each character

        // Check if the character is a curly brace ('{' or '}')
        if (ch == '{' || ch == '}') {
            // Print the row and column where the curly brace was found
            printf("%c found at Row: %d, Column: %d\n", ch, row, col);
        }

        // Check if the character is a newline, indicating the end of a row
        if (ch == '\n') {
            row++; // Increment the row count
            col = 0; // Reset the column count for the new row
        }
    }

    fclose(file); // Close the file after reading
    return 0; // Exit the program successfully
}

