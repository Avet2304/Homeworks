#include <stdio.h>

int main() {
    int N, M, K, choice;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N + 1];

    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to insert: ");
    scanf("%d", &K);

    printf("Choose where to insert the number:\n1. Beginning\n2. End\n3. M-th place\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        for (int i = N; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = K;
        N++;
    } else if (choice == 2) {
        arr[N] = K;
        N++;
    } else if (choice == 3) {
        printf("Enter the M-th position (1 to %d): ", N + 1);
        scanf("%d", &M);
        if (M < 1 || M > N + 1) {
            printf("Invalid position!\n");
            return 0;
        }
        for (int i = N; i >= M; i--) {
            arr[i] = arr[i - 1];
        }
        arr[M - 1] = K;
        N++;
    } else {
        printf("Invalid choice!\n");
        return 0;
    }

    printf("Modified array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

