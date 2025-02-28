#include <stdio.h>

int main() {
    int numbers[10];  // Array to store 10 numbers
    int min, max;     // Variables to store the minimum and maximum values

    // Input 10 numbers from the user
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);  // Store each number in the array
    }

    // Initialize min and max with the first number in the array
    min = max = numbers[0];

    // Loop through the rest of the array to find the min and max
    for (int i = 1; i < 10; i++) {
        if (numbers[i] < min) {
            min = numbers[i];  // Update min if a smaller number is found
        }
        if (numbers[i] > max) {
            max = numbers[i];  // Update max if a larger number is found
        }
    }

    // Print the minimum and maximum numbers
    printf("The minimum number is: %d\n", min);
    printf("The maximum number is: %d\n", max);

    return 0;
}

