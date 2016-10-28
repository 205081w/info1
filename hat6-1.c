#include <stdio.h>

int main() {
    int i, max1, max2;
    int arA[] = {5, 1, 9, 4, 8, 3, 7};

    max1 = arA[0];

    for (i = 1; i < 7; i++) {
        if (max1 < arA[i]) {
            max1 = arA[i];
        }
        if (max2 < arA[i] && max1 > arA[i]) {
            max2 = arA[i];
        }
    }
    printf("max1 = %d, max2 = %d\n", max1, max2);

    return 0;
}


