#include <stdio.h>

int main() {
    int i;
    int arA[10];

    arA[0] = 0;
    arA[1] = 1;

    for (i = 2; i < 10; i++) {
        arA[i] = arA[i-1] + arA[i-2];
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", arA[i]);
    }
    printf("\n");

    return 0;

}



