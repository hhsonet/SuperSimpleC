#include <stdio.h>

int main(void)
{
    float num;
    int rounded_num;

    printf("Enter a floating-point number: ");
    if (scanf("%f", &num) != 1)
    {
        printf("Error: Invalid input. Please enter a floating-point number.\n");
        return 1;
    }

    if (num >= 0)
    {
        rounded_num = (int)(num + 0.5f);
    }
    else
    {
        rounded_num = (int)(num - 0.5f);
    }

    printf("Rounded integer: %d\n", rounded_num);
    return 0;
}
