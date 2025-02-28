#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];
    int ascending = 1, descending = 1;

    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            descending = 0;
        }
        if (arr[i] > arr[i + 1]) {
            ascending = 0;
        }
    }

    if (ascending || descending) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

