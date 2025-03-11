#include <stdio.h>
#include <string.h>

// Function to compress the string by counting consecutive characters
void compressString(char* s) {
    int n = strlen(s); // Get the length of the input string

    if (n == 0) {
        return; // If the string is empty, nothing to compress
    }

    int writeIndex = 0; // Index to write compressed string
    int count = 1; // Count the occurrences of each character

    // Loop through the string starting from the second character
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            count++; // Increment count if the current character is the same as the previous one
        } else {
            // Write the character at writeIndex and its count
            s[writeIndex++] = s[i - 1];
            s[writeIndex++] = count + '0'; // Convert the count to character and store it
            count = 1; // Reset count for the next character
        }
    }
    
    // Write the last character and its count
    s[writeIndex++] = s[n - 1];
    s[writeIndex++] = count + '0';

    // Null-terminate the compressed string
    s[writeIndex] = '\0';
}

int main() {
    char text[100]; // Array to hold the input string, max size 100

    // Ask the user to input a string
    printf("Enter a string to compress: ");
    scanf("%s", text); // Read the string from user input

    compressString(text); // Compress the string

    // Output the compressed string
    printf("Compressed string: %s\n", text);
    
    return 0;
}

