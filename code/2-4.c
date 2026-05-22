#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 2)
        return 0;

    FILE* fp = fopen(argv[1], "r");

    /*while(feof(fp)==0) {
        while(eof(fp)==0) {
            char* read[100] = {0};
            fgets(read, sizeof(read), fp);

        }
        
    } */



    fclose(fp);
}

