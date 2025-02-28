#include <stdio.h>

int main() {
    int N;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Declare an array with N elements
    int arr[N];

    // Ask the user to input N numbers
    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);  // Read each number into the array
    }

    // Print the numbers in reverse order
    printf("Reversed sequence: ");
    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", arr[i]);  // Print the array elements in reverse order
    }
    printf("\n");

    return 0;  // Indicate successful program termination
}

