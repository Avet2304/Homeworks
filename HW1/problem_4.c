#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle negative numbers by making them positive
    number = (number < 0) ? -number : number;

    while (number > 0) {
        sum += number % 10;  // Add the last digit to the sum
        number /= 10;         // Remove the last digit
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}

