#include <stdio.h>
#include "vine.h"

int main(int argc, char* argv[]) {
    if(argc != 3) {
        printf("%d arguments provided, 2 required\n", argc-1);
        return -1;
    }
    int baboonNum;
    int capacity;

    sscanf(argv[1],"%d",&baboonNum);
    sscanf(argv[2],"%d",&capacity);

    if(baboonNum <= 0 || capacity <= 0) {
        printf("The number of baboons and the vine capacity must be at least 1\n");
        return -1;
    }

    printf("%d baboons %d caps\n",baboonNum,capacity);


    return 0;
}
