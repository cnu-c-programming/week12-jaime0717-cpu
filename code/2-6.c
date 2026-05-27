#include <stdio.h>
#include <string.h> //여기에 신기한 게 많다. strstr 신기하다.

int main(int argc, const char *argv[])
{
    if (argc < 3)
        return 0;

    FILE *fp = fopen(argv[1], "r");
    const char *target_str = argv[2];
    // here
    char line[300];

    while (feof(fp) == 0)
    {
        fgets(line, sizeof line, fp);
        if(strstr(line,target_str)!=NULL)
        printf("%s", line);
    }

    fclose(fp);
}
