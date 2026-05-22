#include <stdio.h>

int main(int argc, const char *argv[], const char *envp[])
{
    int i = 0;

    while (argv[i] != NULL)
    {
        printf("%s\n", argv[i]);
        i++;
    }

    return 0;
}