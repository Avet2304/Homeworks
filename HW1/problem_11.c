#include <stdio.h>

int main() {
    int N;

    // Ask the user to input the height of the triangle
    printf("Enter the height of the triangle: ");
    scanf("%d", &N);

    // First triangle: Left-angled (aligned to the left)
    for (int i = 1; i <= N; i++) {
        // Print 'i' stars in the ith row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    printf("\n");

    // Second triangle: Right-angled (aligned to the right)
    for (int i = 1; i <= N; i++) {
        // Print spaces to shift the stars to the right
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print 'i' stars in the ith row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

