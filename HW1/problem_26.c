#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Choose an option:\n1. Convert to uppercase\n2. Convert to lowercase\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = toupper(str[i]);
        }
    } else if (choice == 2) {
        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = tolower(str[i]);
        }
    } else {
        printf("Invalid choice!\n");
        return 0;
    }

    printf("Modified string: %s\n", str);

    return 0;
}

