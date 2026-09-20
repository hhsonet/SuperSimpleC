#include <stdio.h>

int main(void)
{
    char input;

    printf("Enter a lowercase letter: ");
    if (scanf(" %c", &input) != 1)
    {
        printf("Error: Invalid input.\n");
        return 1;
    }

    if (input < 'a' || input > 'z')
    {
        printf("Error: Please enter a valid lowercase letter (a-z).\n");
        return 1;
    }

    printf("The mirror of '%c' in the alphabet is '%c'.\n", input, (char)('z' - (input - 'a')));
    return 0;
}
