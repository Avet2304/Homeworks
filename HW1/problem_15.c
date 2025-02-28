#include <stdio.h>

int main() {
    int numbers[10];
    int min, max;

    // Input 10 numbers
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    // Initialize min and max with the first number
    min = max = numbers[0];

    // Find the min and max
    for (int i = 1; i < 10; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Print the results
    printf("The minimum number is: %d\n", min);
    printf("The maximum number is: %d\n", max);

    return 0;
}

