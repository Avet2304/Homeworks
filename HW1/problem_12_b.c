#include <stdio.h>

int main() {
    int N;

    // Ask the user to enter the height of the triangle
    printf("Enter the height of the triangle: ");
    scanf("%d", &N);

    // Print the triangle of height N
    for (int i = 1; i <= N; i++) {
        // Print spaces before the stars in each row to center the stars
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars in each row (odd number of stars per row)
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line after each row of stars
        printf("\n");
    }

    return 0;
}

