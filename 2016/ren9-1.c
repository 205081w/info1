#include <stdio.h>

int main() {
    char array[] = {'H', 'e', 'l', 'l', 'o'};
    char *pa;
    int i;

    for (i = 0; i < 5; i++) {
        printf("array[%d] = %c (addr = %p)\n", i, array[i], &(array[i]));
    }

    pa = &(array[0]);
    for (i = 0; i < 5; i++) {
        printf("*(pa+%d) = %c (addr=%p)\n", i, *(pa+i), pa+i);
    }

    return 0;
}
