#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two integers (format: a / b): ");
    scanf("%d / %d", &num1, &num2);

    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        printf("%d / %d = %.3f\n", num1, num2, (float)num1 / num2);
    }

    return 0;
}

