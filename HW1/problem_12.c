#include <stdio.h>

int main() {
    int N;

    printf("Enter the base length (odd number): ");
    scanf("%d", &N);

    int rows = (N + 1) / 2; // Height is half of the base plus one

    // Print the isosceles triangle
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

