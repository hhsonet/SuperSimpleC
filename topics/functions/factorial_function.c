#include <stdio.h>

static int factorial(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main(void)
{
    int n;

    printf("Enter n (0-12): ");
    if (scanf("%d", &n) != 1)
    {
        printf("Error: Invalid integer input.\n");
        return 1;
    }

    if (n < 0 || n > 12)
    {
        printf("Error: n must be between 0 and 12.\n");
        return 1;
    }

    printf("Factorial(%d) = %d\n", n, factorial(n));
    return 0;
}
