#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[100];

    printf("Enter a word (max 99 chars): ");
    if (scanf("%99s", text) != 1)
    {
        printf("Error: Invalid input.\n");
        return 1;
    }

    printf("Reversed: ");
    for (int i = (int)strlen(text) - 1; i >= 0; i--)
    {
        putchar(text[i]);
    }
    putchar('\n');
    return 0;
}
