#include <stdio.h>

static void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a;
    int b;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Error: Please enter two integers.\n");
        return 1;
    }

    printf("Before swap: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After swap: a=%d, b=%d\n", a, b);
    return 0;
}
