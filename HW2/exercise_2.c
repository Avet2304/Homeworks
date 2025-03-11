#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024
#define MAX_COLUMNS 100

void print_row(char *line) {
    printf("%s", line);
}

int main() {
    FILE *file = fopen("example.csv", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char line[MAX_LINE_LENGTH];
    char *headers[MAX_COLUMNS];
    int col_num;
    char search_value[100];

    // Read header line
    if (fgets(line, MAX_LINE_LENGTH, file) == NULL) {
        printf("Failed to read CSV header.\n");
        fclose(file);
        return 1;
    }
    printf("Column headers: %s", line);

    // Get user input
    printf("Enter the column number (starting from 1): ");
    scanf("%d", &col_num);
    getchar(); // Consume newline

    printf("Enter search value: ");
    fgets(search_value, sizeof(search_value), stdin);
    search_value[strcspn(search_value, "\n")] = 0; // Remove newline

    // Process rows
    int found = 0;
    while (fgets(line, MAX_LINE_LENGTH, file)) {
        char *copy = strdup(line);
        char *token;
        int current_col = 1;
        token = strtok(copy, ",");
        
        while (token != NULL) {
            if (current_col == col_num && strcmp(token, search_value) == 0) {
                print_row(line);
                found = 1;
                break;
            }
            token = strtok(NULL, ",");
            current_col++;
        }
        free(copy);
    }

    if (!found) {
        printf("No matching rows found.\n");
    }

    fclose(file);
    return 0;
}


