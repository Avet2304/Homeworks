#include <stdio.h>

int main() {
    int count[10] = {0}; 
    int num;

    printf("Enter numbers between 1 and 10 (enter -1 to stop):\n");

    while (1) {
        scanf("%d", &num);
        if (num == -1) {
            break;
        }
        if (num >= 1 && num <= 10) {
            count[num - 1]++;
        } else {
            printf("Invalid number. Please enter a number between 1 and 10.\n");
        }
    }

    printf("Number occurrences:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d: %d\n", i + 1, count[i]);
    }

    return 0;
}

