#include <stdio.h>

void sortAscending(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortDescending(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N, choice;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Choose sorting order:\n1. Ascending\n2. Descending\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        sortAscending(arr, N);
        printf("Sorted in Ascending order: ");
    } else if (choice == 2) {
        sortDescending(arr, N);
        printf("Sorted in Descending order: ");
    } else {
        printf("Invalid choice!\n");
        return 0;
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

