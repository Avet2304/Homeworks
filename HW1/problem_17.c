#include <stdio.h>

void printBinary(int num) {
    for (int i = 3; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    int num;

    printf("Enter a number between -8 and 7: ");
    scanf("%d", &num);

    if (num < -8 || num > 7) {
        printf("Number out of range for 4-bit representation.\n");
        return 1;
    }

    if (num < 0) {
        num = (1 << 4) + num;  // Convert to 2's complement
    }

    printf("4-bit binary: ");
    printBinary(num);

    return 0;
}

