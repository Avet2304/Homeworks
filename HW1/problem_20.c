#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed sequence: ");
    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

