#include <stdio.h>

#define MAX_STUDENTS 5

struct Student
{
    char name[50];
    int score;
};

int main(void)
{
    struct Student students[MAX_STUDENTS];
    int n;
    int sum = 0;

    printf("Enter number of students (1-5): ");
    if (scanf("%d", &n) != 1)
    {
        printf("Error: Invalid count input.\n");
        return 1;
    }

    if (n < 1 || n > MAX_STUDENTS)
    {
        printf("Error: Student count must be between 1 and 5.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter name and score for student %d: ", i + 1);
        if (scanf("%49s %d", students[i].name, &students[i].score) != 2)
        {
            printf("Error: Invalid student input.\n");
            return 1;
        }

        if (students[i].score < 0 || students[i].score > 100)
        {
            printf("Error: Score must be between 0 and 100.\n");
            return 1;
        }

        sum += students[i].score;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s: %d\n", students[i].name, students[i].score);
    }
    printf("Class average: %.2f\n", (double)sum / (double)n);

    return 0;
}
