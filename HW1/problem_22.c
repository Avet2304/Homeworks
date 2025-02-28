#include <stdio.h>

int main() {
    int N;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N]; // Declare an array of size N
    int ascending = 1, descending = 1; // Flags to check if the array is ascending or descending

    // Ask the user to input N numbers
    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // Read each number and store it in the array
    }

    // Loop to check if the array is either ascending or descending
    for (int i = 0; i < N - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            descending = 0; // If the current number is smaller than the next, it's not descending
        }
        if (arr[i] > arr[i + 1]) {
            ascending = 0; // If the current number is greater than the next, it's not ascending
        }
    }

    // If the array is either ascending or descending, print "Yes"
    if (ascending || descending) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0; // Return 0 to indicate successful execution
}

