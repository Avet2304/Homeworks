#include <stdio.h>

int main() {
    int arr[10];  // Array to store 10 integers
    int N, i, found = 0;  // N is the number to remove, 'found' tracks whether we found the number

    // Prompt the user to enter 10 integers
    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);  // Read the integers into the array
    }

    // Ask the user for the number to remove
    printf("Enter the number to remove: ");
    scanf("%d", &N);  // Read the number to remove

    // Search for the number in the array
    for (i = 0; i < 10; i++) {
        if (arr[i] == N) {  // If the number is found
            found = 1;  // Set the flag to indicate the number was found
            // Shift all elements after the found number to the left
            for (int j = i; j < 9; j++) {
                arr[j] = arr[j + 1];
            }
            arr[9] = 0;  // Set the last element to 0 (optional)
            break;  // Remove only the first occurrence
        }
    }

    // If the number was not found, print a message
    if (!found) {
        printf("Number not found.\n");
    }

    // Print the final array after removal
    printf("Final array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);  // Print each element in the array
    }
    printf("\n");

    return 0;  // Return 0 to indicate successful execution
}

