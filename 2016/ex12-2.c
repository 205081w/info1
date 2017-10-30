#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;
    if (argc==1) {
        printf("Usage: %s number\n", argv[0]);
        return 0;
    }
    num = atoi(argv[1]);
    printf("input number=%d\n", num);

    return 0;
}
