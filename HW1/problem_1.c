#include <stdio.h>

int main(){
    // Declare variables
    int a;      // To store the first integer input
    char c;     // To store the operator (e.g., '+')
    int b;      // To store the second integer input
    int sum;    // To store the result of the operation

    // Read the first integer input
    scanf("%d", &a);
    
    // Read the operator input, there's a need for an extra scanf to consume the newline character
    scanf("%c", &c);
    
    // Read the second integer input
    scanf("%d", &b);
    
    // If the operator is '+', perform the addition operation
    if(c == '+'){
        sum = a + b;     // Calculate the sum of a and b
        printf("%d", sum);  // Output the result
    }

    return 0;  // Exit the program
}

