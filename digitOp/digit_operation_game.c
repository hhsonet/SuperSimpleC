#include <stdio.h>

int main(void)
{
    int number;
    char op;
    int tens;
    int units;

    printf("Enter a two-digit positive integer: ");
    if (scanf("%d", &number) != 1)
    {
        printf("Error: Invalid number input.\n");
        return 1;
    }

    if (number < 10 || number > 99)
    {
        printf("Error: Number must be between 10 and 99.\n");
        return 1;
    }

    printf("Enter an operator (+, -, *, /): ");
    if (scanf(" %c", &op) != 1)
    {
        printf("Error: Invalid operator input.\n");
        return 1;
    }

    tens = number / 10;
    units = number % 10;

    switch (op)
    {
        case '+':
            printf("%d + %d = %d\n", tens, units, tens + units);
            break;
        case '-':
            printf("%d - %d = %d\n", tens, units, tens - units);
            break;
        case '*':
            printf("%d * %d = %d\n", tens, units, tens * units);
            break;
        case '/':
            if (units == 0)
            {
                printf("Error: Division by zero.\n");
                return 1;
            }
            printf("%d / %d = %.2f\n", tens, units, (double)tens / (double)units);
            break;
        default:
            printf("Error: Unsupported operator. Use +, -, *, or /.\n");
            return 1;
    }

    return 0;
}
