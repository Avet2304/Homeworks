#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024   // Maximum length of a line in the CSV file
#define MAX_COLUMNS 100        // Maximum number of columns in the CSV file

// Function to print the row (line) of the file
void print_row(char *line) {
    printf("%s", line);  // Print the entire line
}

int main() {
    // Open the CSV file in read mode
    FILE *file = fopen("example.csv", "r");
    if (file == NULL) {
        perror("Error opening file");  // Print an error message if the file can't be opened
        return 1;  // Exit with an error code
    }

    char line[MAX_LINE_LENGTH];  // Array to store a line from the file
    char *headers[MAX_COLUMNS];  // Array to store column headers (not used in this implementation)
    int col_num;                 // Variable to store the user-specified column number
    char search_value[100];      // Variable to store the value to search for in the specified column

    // Read the header line (first line in the CSV)
    if (fgets(line, MAX_LINE_LENGTH, file) == NULL) {
        printf("Failed to read CSV header.\n");  // If the header can't be read, print an error message
        fclose(file);  // Close the file
        return 1;  // Exit with an error code
    }
    printf("Column headers: %s", line);  // Print the header line

    // Get the column number from the user
    printf("Enter the column number (starting from 1): ");
    scanf("%d", &col_num);  // Read the column number from the user
    getchar();  // Consume the newline character left by scanf

    // Get the value to search for from the user
    printf("Enter search value: ");
    fgets(search_value, sizeof(search_value), stdin);  // Read the search value from the user
    search_value[strcspn(search_value, "\n")] = 0;  // Remove the newline character from the end of the string

    // Process each row of the CSV file
    int found = 0;  // Flag to track if a matching row is found
    while (fgets(line, MAX_LINE_LENGTH, file)) {  // Read each line (row) from the file
        char *copy = strdup(line);  // Create a copy of the line for tokenizing
        char *token;  // Variable to store individual tokens (column values)
        int current_col = 1;  // Track the current column number in the row
        token = strtok(copy, ",");  // Tokenize the line by commas (separators)

        // Process each token (column value)
        while (token != NULL) {
            if (current_col == col_num && strcmp(token, search_value) == 0) {  // Check if the token matches the search value
                print_row(line);  // Print the entire row if a match is found
                found = 1;  // Set the flag to indicate that a matching row is found
                break;  // Exit the loop after finding the match
            }
            token = strtok(NULL, ",");  // Move to the next token (next column)
            current_col++;  // Increment the column number
        }
        free(copy);  // Free the dynamically allocated memory for the copy of the line
    }

    // If no matching rows were found, print a message
    if (!found) {
        printf("No matching rows found.\n");
    }

    fclose(file);  // Close the file when done
    return 0;  // Exit successfully
}

