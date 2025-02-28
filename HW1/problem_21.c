#include <stdio.h>

int main() {
    int N, num, sum = 0;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Ask the user to input N numbers
    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);  // Read each number
        sum += num; // Add the number to the sum
    }

    // Print the total sum of all the numbers
    printf("The sum of the numbers is: %d\n", sum);

    return 0;  // Indicate successful program termination
}

