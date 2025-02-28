#include <stdio.h>

int main() {
    int N, M;
    char ch;

    printf("Enter the dimensions N, M and the character: ");
    scanf("%d %d %c", &N, &M, &ch);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == 0 || i == N - 1 || j == 0 || j == M - 1) {
                printf("%c", ch);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

