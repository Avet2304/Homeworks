#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Enter an expression (format: a / b): ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch(op) {
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("%d / %d = %.3f\n", num1, num2, (float)num1 / num2);
            }
            break;
        default:
            printf("Error: Unsupported operator.\n");
    }

    return 0;
}

