#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a two-digit positive integer: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 10 || n > 99)
    {
        printf("Error: The number entered is not a two-digit positive integer.\n");
        return 1;
    }

    printf("The sum of its digits is: %d\n", (n / 10) + (n % 10));
    return 0;
}
