#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the number of digits in num2
    int temp = num2;
    int digits = 0;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Concatenate num1 and num2
    int result = num1;
    for (int i = 0; i < digits; i++) {
        result *= 10;
    }
    result += num2;

    printf("The concatenated number is: %d\n", result);

    return 0;
}

