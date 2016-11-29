#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int num;
    if (argc != 2) {
        printf("Useage: %s number\n", argv[0]);
        return 0;
    }

    num = atoi(argv[1]);
    switch (num%3) {
        case 0:
            printf("%d is multiple of 2\n", num);
            break;
        case 1:
            printf("%d is remenber of 1\n", num);
            break;
        case 2:
            printf("%d is remenber of 2\n", num);
            break;
    }

    return 0;
}
