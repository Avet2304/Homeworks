#include <stdio.h>

int main() {
    int N;

    // Ask the user to enter the base length of the triangle (must be an odd number)
    printf("Enter the base length (odd number): ");
    scanf("%d", &N);

    // Calculate the number of rows based on the base length (half the base + 1)
    int rows = (N + 1) / 2; // The height of the isosceles triangle

    // Print the isosceles triangle
    for (int i = 1; i <= rows; i++) {
        // Print spaces before the stars in each row to center the stars
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print the stars in each row (odd number of stars per row)
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line after each row of stars
        printf("\n");
    }

    return 0;
}

