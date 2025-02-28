#include <stdio.h>
#include <ctype.h>  // Required for toupper and tolower functions

int main() {
    char str[100]; // Declare a string of size 100
    int choice;    // To store user's choice

    // Ask the user to input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets to read the string including spaces

    // Ask the user for the desired conversion choice
    printf("Choose an option:\n1. Convert to uppercase\n2. Convert to lowercase\nEnter your choice: ");
    scanf("%d", &choice);  // Read user's choice

    // Convert the string based on user's choice
    if (choice == 1) {
        // Loop through the string and convert each character to uppercase
        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = toupper(str[i]);  // Convert each character to uppercase
        }
    } else if (choice == 2) {
        // Loop through the string and convert each character to lowercase
        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = tolower(str[i]);  // Convert each character to lowercase
        }
    } else {
        // If the user provides an invalid choice
        printf("Invalid choice!\n");
        return 0;  // Exit the program if the choice is invalid
    }

    // Output the modified string
    printf("Modified string: %s\n", str);

    return 0;  // Return 0 to indicate successful execution
}

