#include <stdio.h>

int main() {
    int n, sum;

    // Input a number
    printf("Enter a two-digit positive integer: ");
    scanf("%d", &n);

    // Check if the number is a two-digit positive integer
    if (n >= 10 && n <= 99) {
        // Calculate the sum of its digits
        sum = (n / 10) + (n % 10);

        // Output the result
        printf("The sum of its digits is: %d\n", sum);
    } else {
        // Handle invalid input
        printf("Error: The number entered is not a two-digit positive integer.\n");
    }

    return 0;
}
