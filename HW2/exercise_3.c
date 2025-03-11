#include <stdio.h>
#include <string.h>

// Function to reverse a string in-place using pointers
void reverseString(char *str) {
    if (str == NULL || *str == '\0') { // Check for null or empty string
        return; 
    }

    char *start = str;          // Pointer to the beginning of the string
    char *end = str + strlen(str) - 1; // Pointer to the end of the string

    // Swap characters from start and end until pointers meet in the middle
    while (start < end) {
        char temp = *start;  // Temporarily store the value at start
        *start = *end;       // Assign end value to start
        *end = temp;         // Assign temp (original start value) to end

        start++;  // Move start pointer forward
        end--;    // Move end pointer backward
    }
}

int main() {
    char str[100]; // Buffer for user input

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string from user

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    reverseString(str); // Call the reverse function

    printf("Reversed string: %s\n", str); // Display the reversed string

    return 0;
}

