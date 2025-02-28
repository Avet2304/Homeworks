#include <stdio.h>

int main() {
    // Declare an integer variable to store the grade input by the user
    int grade;

    // Infinite loop to allow continuous input until user chooses to quit
    while (1) {
        // Prompt the user to enter their grade or -1 to quit the program
        printf("Enter your grade (0-100) or -1 to quit: ");
        
        // Read the user's input for the grade
        scanf("%d", &grade);

        // Check if the user entered -1 to exit the program
        if (grade == -1) {
            // Print a message indicating the program is exiting
            printf("Exiting program. Goodbye!\n");
            // Break the loop and exit the program
            break;
        }

        // Validate that the grade is within the acceptable range (0-100)
        if (grade < 0 || grade > 100) {
            // Print an error message if the grade is out of range
            printf("Invalid grade. Must be between 0 and 100.\n");
        } 
        // If the grade is between 90 and 100, classify it as an "A"
        else if (grade >= 90) {
            printf("Your grade is A\n");
        } 
        // If the grade is between 80 and 89, classify it as a "B"
        else if (grade >= 80) {
            printf("Your grade is B\n");
        } 
        // If the grade is between 70 and 79, classify it as a "C"
        else if (grade >= 70) {
            printf("Your grade is C\n");
        } 
        // If the grade is between 60 and 69, classify it as a "D"
        else if (grade >= 60) {
            printf("Your grade is D\n");
        } 
        // If the grade is below 60, classify it as an "F"
        else {
            printf("Your grade is F\n");
        }
    }

    // Return 0 to indicate that the program has finished successfully
    return 0;
}

