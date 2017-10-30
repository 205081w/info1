#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv) {
    int num;

    if (argc != 2) {
        printf("Useage: %s number\n", argv[0]);
        return 0;
    }

    num = atoi(argv[1]);

    switch (num%7) {
        case 0:
            printf("Monday\n");
            break;
        case 1:
            printf("Tuesday\n");
            break;
        case 2:
            printf("Wednesday\n");
            break;
        case 3:
            printf("Thursday\n");
            break;
        case 4:
            printf("Fryday\n");
            break;
        case 5:
            printf("Sataday\n");
            break;
        case 6:
            printf("Sunday\n");
            break;
    }

    return 0;
}
