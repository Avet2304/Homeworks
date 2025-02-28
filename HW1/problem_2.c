#include <stdio.h>

int main() {
    // Declare an integer variable to store the grade input by the user
    int grade;

    // Prompt the user to enter their grade, expecting an integer between 0 and 100
    printf("Enter your grade (0-100): ");
    
    // Use scanf to read the user's grade
    scanf("%d", &grade);

    // Check if the grade is out of the valid range (0-100)
    if (grade < 0 || grade > 100) {
        // Print an error message if the grade is not within the allowed range
        printf("Invalid grade. Must be between 0 and 100.\n");
    } 
    // Check if the grade is 90 or higher, which corresponds to an "A"
    else if (grade >= 90) {
        printf("Your grade is A\n");
    } 
    // Check if the grade is between 80 and 89, which corresponds to a "B"
    else if (grade >= 80) {
        printf("Your grade is B\n");
    } 
    // Check if the grade is between 70 and 79, which corresponds to a "C"
    else if (grade >= 70) {
        printf("Your grade is C\n");
    } 
    // Check if the grade is between 60 and 69, which corresponds to a "D"
    else if (grade >= 60) {
        printf("Your grade is D\n");
    } 
    // If the grade is below 60, it's an "F"
    else {
        printf("Your grade is F\n");
    }

    // Return 0 to indicate the program finished successfully
    return 0;
}

