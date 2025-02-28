#include <stdio.h>

int main() {
    int N, M;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete (1 to %d): ", N);
    scanf("%d", &M);

    if (M < 1 || M > N) {
        printf("Invalid position!\n");
        return 0;
    }

    for (int i = M - 1; i < N - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("Modified array: ");
    for (int i = 0; i < N - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

