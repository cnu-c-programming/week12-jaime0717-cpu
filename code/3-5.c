#include <stdio.h>

int main(int argc, const char* argv[]) {
    const char* filename = "numbers.txt";

    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }

    //here
    int num, sum = 0;
    char* no[100];

    while(feof(fp) == 0) {
        int result = fscanf(fp, "%d", &num);
        if(result == 1) {
            sum +=num;
        } else {
            fscanf(fp, "%s", no);
            fprintf(stderr, "invalid input %s\n", no); //3-1
        }

    }

    printf("sum: %d\n", sum);
    fclose(fp);
    return 0;
}
