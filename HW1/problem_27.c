#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sort_string(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                // Swap characters
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str1[100], str2[100];

    // Take input for two strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;  // Remove newline character

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;  // Remove newline character

    // Remove spaces and convert to lowercase for case-insensitive comparison
    int i = 0, j = 0;
    while (str1[i]) {
        if (isspace(str1[i])) {
            i++;
            continue;
        }
        str1[j++] = tolower(str1[i++]);
    }
    str1[j] = '\0';

    i = 0;
    j = 0;
    while (str2[i]) {
        if (isspace(str2[i])) {
            i++;
            continue;
        }
        str2[j++] = tolower(str2[i++]);
    }
    str2[j] = '\0';

    // Check if the strings have different lengths
    if (strlen(str1) != strlen(str2)) {
        printf("The strings are not anagrams.\n");
        return 0;
    }

    // Sort the strings to compare them lexicographically
    sort_string(str1);
    sort_string(str2);

    // Compare the sorted strings
    if (strcmp(str1, str2) == 0) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}

