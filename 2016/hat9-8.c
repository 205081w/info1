#include <stdio.h>

int outerproduct(int *ary1, int *ary2);

int main() {
    int ary1[] = {3, 2, 4};
    int ary2[] = {3, 2, 4};
    int outer;

    outer = outerproduct(ary1, ary2);

    printf("outerproduct: %d\n", outer);

    return 0;
}

int outerproduct(int *ary1, int *ary2) {
    int i, outer = 0;

    for (i = 0; i < 3; i++) {
        outer += (*(ary1+i) * *(ary2+i));
    }

    return outer;
}

