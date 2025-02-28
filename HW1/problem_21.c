#include <stdio.h>

int main() {
    int N, num, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        sum += num; // Add each number to sum
    }

    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}

