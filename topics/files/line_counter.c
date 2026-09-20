#include <stdio.h>
#include <string.h>

int main(void)
{
    char path[256];
    FILE *fp;
    int ch;
    int last_ch = EOF;
    int lines = 0;
    int has_content = 0;

    printf("Enter file path: ");
    if (fgets(path, sizeof(path), stdin) == NULL)
    {
        printf("Error: Invalid file path input.\n");
        return 1;
    }
    path[strcspn(path, "\n")] = '\0';

    if (path[0] == '\0')
    {
        printf("Error: Empty file path.\n");
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
            if (last_ch != '\r')
            {
                lines++;
            }
        }
        else if (ch == '\r')
        {
            lines++;
        }
        last_ch = ch;
    }

    fclose(fp);

    if (has_content)
    {
        if (last_ch != '\n' && last_ch != '\r')
        {
            lines++;
        }
        printf("Line count: %d\n", lines);
    }
    else
    {
        printf("Line count: 0\n");
    }

    return 0;
}
