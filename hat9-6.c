#include <stdio.h>

int innerproduct(int *ary1, int *ary2);

int main() {
    int ary1[] = {3, 2, 4};
    int ary2[] = {3, 2, 4};
    int inner;

    inner = innerproduct(ary1, ary2);

    printf("innerproduct: %d\n", inner);

    return 0;
}

int innerproduct(int *ary1, int *ary2) {
    int i, inner = 0;

    for (i = 0; i < 3; i++) {
        inner += (*(ary1+i) * *(ary2+i));
    }

    return inner;
}

