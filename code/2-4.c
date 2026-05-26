#include <stdio.h>

int main(int argc, const char *argv[])
{
    if (argc < 2)
        return 0;

    FILE *fp = fopen(argv[1], "r");

    int alpha[26] = {0};
    int ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        alpha[ch - 'a']++;
    }

    for (int i=0; i < 26; i++)
    {printf("%c: %d\n", 97+i ,alpha[i]);
    }

    fclose(fp);
}
