#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        printf("%d is not a power of 2.\n", number);
    } else if ((number & (number - 1)) == 0) {
        printf("%d is a power of 2.\n", number);
    } else {
        printf("%d is not a power of 2.\n", number);
    }

    return 0;
}

