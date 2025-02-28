#include <stdio.h>
#include <string.h>

int main() {
    char binary[33];
    int decimal = 0;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int len = strlen(binary);

    for (int i = 0; i < len; i++) {
        if (binary[i] == '1') {
            decimal = (decimal << 1) | 1; // shift left and add 1
        } else if (binary[i] == '0') {
            decimal = decimal << 1; // shift left, add 0 (does nothing)
        } else {
            printf("Invalid binary number.\n");
            return 1;
        }
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}

