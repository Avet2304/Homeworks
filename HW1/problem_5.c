#include <stdio.h>

int main() {
    int number, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    printf("The inverse of the number is: %d\n", reversed);

    return 0;
}

