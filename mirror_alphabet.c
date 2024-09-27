#include <stdio.h>

int main() {
    char input, mirror;
    
    printf("Enter a lowercase letter: ");
    scanf("%c", &input);
    
    // Check if the input is a lowercase letter
    if (input >= 'a' && input <= 'z') {
        // Calculate the mirror letter
        mirror = 'z' - (input - 'a');
        // Print the result
        printf("The mirror of '%c' in the alphabet is '%c'.\n", input, mirror);
    } else {
        // If the input is not a lowercase letter, print an error message
        printf("Please enter a valid lowercase letter.\n");
    }
    
    return 0;
}
