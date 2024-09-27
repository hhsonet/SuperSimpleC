/*
 * Program to round a floating-point number to the nearest integer
 * without using the round() function. Only arithmetic operations are used.
 * 
 */

#include <stdio.h>

/**
 * Main function that takes a floating-point input from the user
 * and rounds it to the nearest integer using arithmetic operations.
 * 
 * @return 0 on successful execution
 */
int main() {
    float num;
    int rounded_num;

    // Prompt the user to enter a floating-point number
    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    // Round the number using arithmetic operations
    if (num >= 0) {
        // For positive numbers, add 0.5 and truncate
        rounded_num = (int)(num + 0.5);
    } else {
        // For negative numbers, subtract 0.5 and truncate
        rounded_num = (int)(num - 0.5);
    }

    // Output the result to the user
    printf("Rounded integer: %d\n", rounded_num);

    return 0;
}
