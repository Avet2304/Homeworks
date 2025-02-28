#include <stdio.h>

int main() {
    int N, M;

    // Prompt user for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N]; // Declare the array with N elements

    // Prompt user to input the numbers for the array
    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // Read each number into the array
    }

    // Ask for the position of the element to delete
    printf("Enter the position of the element to delete (1 to %d): ", N);
    scanf("%d", &M);

    // Check if the entered position is valid (within range)
    if (M < 1 || M > N) {
        printf("Invalid position!\n"); // If the position is out of range
        return 0; // Exit the program
    }

    // Shift elements to the left to delete the element at position M
    for (int i = M - 1; i < N - 1; i++) {
        arr[i] = arr[i + 1]; // Move the element to the left by one position
    }

    // Print the modified array (one element has been removed)
    printf("Modified array: ");
    for (int i = 0; i < N - 1; i++) {
        printf("%d ", arr[i]); // Print each element of the modified array
    }
    printf("\n");

    return 0;
}

