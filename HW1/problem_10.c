#include <stdio.h>

int main() {
    int N, M;
    char ch;

    // Ask the user to enter the dimensions of the rectangle (N, M) and the character to draw with
    printf("Enter the dimensions N, M and the character: ");
    scanf("%d %d %c", &N, &M, &ch);

    // Loop through each row (height of the rectangle)
    for (int i = 0; i < N; i++) {
        // Loop through each column (width of the rectangle)
        for (int j = 0; j < M; j++) {
            // Print the character on the borders (first and last row, first and last column)
            if (i == 0 || i == N - 1 || j == 0 || j == M - 1) {
                printf("%c", ch);
            } else {
                // Print a space for the inner part of the rectangle
                printf(" ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

