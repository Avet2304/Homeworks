#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen(__FILE__, "r"); // Opens the current source file
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char ch;
    int row = 1, col = 0;

    printf("Locations of parentheses in file:\n");

    while ((ch = fgetc(file)) != EOF) {
        col++;
        if (ch == '{' || ch == '}') {
            printf("%c found at Row: %d, Column: %d\n", ch, row, col);
        }
        if (ch == '\n') { // Move to next line
            row++;
            col = 0;
        }
    }

    fclose(file);
    return 0;
}

