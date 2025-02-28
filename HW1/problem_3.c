#include <stdio.h>

int main() {
    int N, sum = 0;

    printf("Enter a number N (1-1000): ");
    scanf("%d", &N);

    if (N < 1 || N > 1000) {
        printf("Invalid input. N must be between 1 and 1000.\n");
        return 1;
    }

    for (int i = 1; i < N; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("The sum of multiples of 3 and 5 below %d is: %d\n", N, sum);

    return 0;
}

