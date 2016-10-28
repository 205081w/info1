#include <stdio.h>

int main() {
    int i, n;
    int arA[] = {78, 65, 82, 97, 55, 87, 45, 65, 72};

    for (i = 0; i < 8; i++) {
        if (arA[i] >= 80) {
            n++;
        }
    }

    printf("over 80 is %d people.\n", n);

    return 0;
}

