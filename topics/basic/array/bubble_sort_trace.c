#include <stdio.h>

int main()
{
    int i, j, temp;
    int marks[] = {5, 6, 3, 1, 0};
    int n = 5;

    printf("Original array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", marks[i]);
    printf("\n\n");

    for(j = 0; j < n - 1; j++)
    {
        printf("Pass %d:\n", j + 1);
        for(i = 0; i < n - 1; i++)
        {
            printf("Comparing index %d (%d) and %d (%d): ", i, marks[i], i + 1, marks[i + 1]);

            if(marks[i] > marks[i + 1])
            {
                temp = marks[i];
                marks[i] = marks[i + 1];
                marks[i + 1] = temp;
                printf("Swapped\n");
            }
            else
            {
                printf("No swap\n");
            }

            printf("Array now: ");
            for(int k = 0; k < n; k++)
                printf("%d ", marks[k]);
            printf("\n");
        }
        printf("\n");
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", marks[i]);

    return 0;
}
