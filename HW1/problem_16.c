#include <stdio.h>

int main() {
    int count[10] = {0};  // Array to count occurrences of numbers 1 to 10
    int num;               // Variable to store the current input number

    // Prompt user to enter numbers between 1 and 10
    printf("Enter numbers between 1 and 10 (enter -1 to stop):\n");

    // Continuously ask for input until -1 is entered
    while (1) {
        scanf("%d", &num);  // Read the input number
        if (num == -1) {     // Exit the loop if the user enters -1
            break;
        }
        // Check if the input is between 1 and 10
        if (num >= 1 && num <= 10) {
            count[num - 1]++;  // Increment the count for the corresponding number
        } else {
            printf("Invalid number. Please enter a number between 1 and 10.\n");  // Handle invalid input
        }
    }

    // Output the occurrences of each number from 1 to 10
    printf("Number occurrences:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d: %d\n", i + 1, count[i]);  // Print the count of each number
    }

    return 0;
}

