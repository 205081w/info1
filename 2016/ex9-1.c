#include <stdio.h>

int main() {
    int array[] = {3, 1, 4, 5};
    int *pa;
    int i;

    for (i = 0; i < 4; i++) {
        printf("array[%d] = %d (addr = %p)\n", i, array[i], &(array[i]));
    }

    pa = &(array[0]);
    for (i = 0; i < 4; i++) {
        printf("*(pa+%d) = %d (addr=%p)\n", i, *(pa+i), pa+i);
    }

    return 0;
}
