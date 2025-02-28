#include <stdio.h>

// Function to sort the array in ascending order using Bubble Sort
void sortAscending(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they're in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to sort the array in descending order using Bubble Sort
void sortDescending(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap elements if they're in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N, choice;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N]; // Array to store the numbers
    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // Read the numbers into the array
    }

    // Ask user to choose sorting order
    printf("Choose sorting order:\n1. Ascending\n2. Descending\nEnter your choice: ");
    scanf("%d", &choice);

    // Sort the array based on the user's choice
    if (choice == 1) {
        sortAscending(arr, N); // Sort in ascending order
        printf("Sorted in Ascending order: ");
    } else if (choice == 2) {
        sortDescending(arr, N); // Sort in descending order
        printf("Sorted in Descending order: ");
    } else {
        printf("Invalid choice!\n"); // Handle invalid choice
        return 0;
    }

    // Print the sorted array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]); // Output the sorted array
    }
    printf("\n");

    return 0;
}

