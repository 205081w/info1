#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double num;
    if (argc==1) {
        printf("Usage: %s number\n", argv[0]);
        return 0;
    }
    num = atof(argv[1]);

    printf("input number=%f\n", num);

    return 0;
}

