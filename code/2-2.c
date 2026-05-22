#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[64];
    int score;
} Student;

int main(int argc, const char *argv[])
{
    FILE *fp = fopen("student.txt", "r");
    int count = 0;
    Student students[64];

    // part 1
    while (feof(fp) == 0)
    {
        ++count;
        fscanf(fp, "%s %d", students[count].name, &students[count].score);
        printf("%d\n", students[count]);
    }

    int max = 0;
    float avg = 0;

    // part2
    for (int i = 1; i < count; i++)
    {
        avg = avg + students[i].score;
        if (students[i].score > max)
            max = students[i].score;
    }
    avg = avg/count;

    printf("max: %d\n", max);
    printf("avg: %.2f\n", avg);

    fclose(fp);

    return 0;
}
