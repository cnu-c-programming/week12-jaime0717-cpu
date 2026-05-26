#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    if (argc < 3)
        return 0;

    FILE *fp = fopen(argv[1], "r");
    const char *target_str = argv[2];
    // here
    char line[100];

    while (feof(fp) == 0)
    {
        fgets(line, sizeof line, fp);
        for (int i = 0; i < sizeof line; i++)
        {
            for (int j = 0; j < strlen(target_str); j++)
            {
                char* cmp = 
            }
            //if (strcmp(line[i+j], ))
        }
    }

    fclose(fp);
}
