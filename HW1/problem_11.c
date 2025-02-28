#include <stdio.h>

int main() {
    int N;

    printf("Enter the height of the triangle: ");
    scanf("%d", &N);

    // First triangle: Left-angled
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // Second triangle: Right-angled
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

