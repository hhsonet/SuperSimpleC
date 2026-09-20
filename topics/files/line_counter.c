#include <stdio.h>

int main(void)
{
    char path[256];
    FILE *fp;
    int ch;
    int lines = 0;
    int has_content = 0;

    printf("Enter file path: ");
    if (scanf("%255s", path) != 1)
    {
        printf("Error: Invalid file path input.\n");
        return 1;
    }

    fp = fopen(path, "r");
    if (fp == NULL)
    {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        has_content = 1;
        if (ch == '\n')
        {
            lines++;
        }
    }

    fclose(fp);

    if (has_content)
    {
        printf("Line count: %d\n", lines + 1);
    }
    else
    {
        printf("Line count: 0\n");
    }

    return 0;
}
