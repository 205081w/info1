#include <stdio.h>

#define ARYSIZE 5

int main() {
    int array[] = {4, 6, 3, 6, 10};
    int i, j;

    for (i = 0; i < ARYSIZE; i++) {
        printf("%d:", i+1);
        for (j = 0; j < array[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;

}
