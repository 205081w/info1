#include <stdio.h>

int innerproductn(int *ary1, int *ary2, int size);

int main() {
    int ary1[] = {3, 2, 4, 1};
    int ary2[] = {3, 3, 4, 5};
    int size = 4;
    int inner;

    inner = innerproductn(ary1, ary2, size);

    printf("innerproduct: %d\n", inner);

    return 0;
}

int innerproductn(int *ary1, int *ary2, int size) {
    int i, inner = 0;

    for (i = 0; i < size; i++) {
        inner += (*(ary1+i) * *(ary2+i));
    }

    return inner;
}

