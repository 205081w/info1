#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num;
    int check[100];
    char end;

    srand(time(NULL));
    while (end != 'y') {
        while (1) {
            num = rand()%100;
            if (check[num] != 1) {
                check[num] = 1;
                break;
            }
        }
        printf("Next Number: %d\n", num);
        printf("End(y/n):");

        scanf(" %c", &end);
    }

    return 0;
}

