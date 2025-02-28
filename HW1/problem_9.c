#include <stdio.h>

int main() {
    int number;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is less than or equal to 1
    if (number <= 1) {
        printf("%d is not a power of 2.\n", number);  // Powers of 2 must be greater than 1
    } 
    // Check if the number is a power of 2 using bitwise operation
    else if ((number & (number - 1)) == 0) {
        printf("%d is a power of 2.\n", number);  // If the number is a power of 2, only one bit will be set
    } 
    else {
        printf("%d is not a power of 2.\n", number);  // If not a power of 2
    }

    return 0;
}

