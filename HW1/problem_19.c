#include <stdio.h>

int main() {
    int arr[10];
    int N, i, found = 0;

    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to remove: ");
    scanf("%d", &N);

    for (i = 0; i < 10; i++) {
        if (arr[i] == N) {
            found = 1;
            for (int j = i; j < 9; j++) {
                arr[j] = arr[j + 1];
            }
            arr[9] = 0; // Add zero at the end
            break; // Remove only the first occurrence
        }
    }

    if (!found) {
        printf("Number not found.\n");
    }

    printf("Final array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

