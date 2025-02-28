#include <stdio.h>
#include <string.h>

int is_substring(char* str1, char* str2) {
    if (strstr(str1, str2) != NULL) {
        return 1;
    }
    if (strstr(str2, str1) != NULL) {
        return 1;
    }
    return 0;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;  // Remove newline character

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;  // Remove newline character

    if (is_substring(str1, str2)) {
        printf("One string is a substring of the other.\n");
    } else {
        printf("No substring relation found.\n");
    }

    return 0;
}

