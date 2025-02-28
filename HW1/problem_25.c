#include <stdio.h>

int main() {
    int N, M, K, choice;

    // Prompt user for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N + 1]; // Allocate space for one extra element

    // Prompt user to input the numbers for the array
    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // Read each number into the array
    }

    // Ask for the number to insert
    printf("Enter the number to insert: ");
    scanf("%d", &K);

    // Prompt the user to choose the position where the number will be inserted
    printf("Choose where to insert the number:\n1. Beginning\n2. End\n3. M-th place\nEnter your choice: ");
    scanf("%d", &choice);

    // Insert the number at the beginning
    if (choice == 1) {
        for (int i = N; i > 0; i--) { 
            arr[i] = arr[i - 1]; // Shift elements to the right
        }
        arr[0] = K; // Insert the number at the beginning
        N++; // Increase the size of the array
    }
    // Insert the number at the end
    else if (choice == 2) {
        arr[N] = K; // Insert the number at the last position
        N++; // Increase the size of the array
    }
    // Insert the number at the M-th position
    else if (choice == 3) {
        printf("Enter the M-th position (1 to %d): ", N + 1);
        scanf("%d", &M);

        // Check if the entered position is valid
        if (M < 1 || M > N + 1) {
            printf("Invalid position!\n");
            return 0; // Exit if the position is out of range
        }

        // Shift elements to the right from position M
        for (int i = N; i >= M; i--) {
            arr[i] = arr[i - 1]; // Shift elements to the right
        }
        arr[M - 1] = K; // Insert the number at the M-th position
        N++; // Increase the size of the array
    }
    // Handle invalid choices
    else {
        printf("Invalid choice!\n");
        return 0; // Exit if the choice is invalid
    }

    // Print the modified array
    printf("Modified array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]); // Print each element of the modified array
    }
    printf("\n");

    return 0;
}

