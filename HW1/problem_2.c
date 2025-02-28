#include <stdio.h>

int main() {
    int grade;

    printf("Enter your grade (0-100): ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Invalid grade. Must be between 0 and 100.\n");
    } else if (grade >= 90) {
        printf("Your grade is A\n");
    } else if (grade >= 80) {
        printf("Your grade is B\n");
    } else if (grade >= 70) {
        printf("Your grade is C\n");
    } else if (grade >= 60) {
        printf("Your grade is D\n");
    } else {
        printf("Your grade is F\n");
    }

    return 0;
}
	
