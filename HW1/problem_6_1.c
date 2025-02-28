#include <stdio.h>

int main() {
    int N, isPrime;

    printf("Enter a number N: ");
    scanf("%d", &N);

    for (int num = 2; num <= N; num++) {
        isPrime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}

