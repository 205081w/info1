#include <stdio.h>

void copyarray(int *ary1, int *ary2, int size);

int main() {
    int i;
    int ary1[] = {3, 1, 2, 4, 5}, ary2[5];
    int size = 5;

    copyarray(ary1, ary2, size);

    printf("ary1:");
    for (i = 0; i < size; i++) {
        printf(" %d", ary1[i]);
    }
    printf("\n");

    printf("ary2:");
    for (i = 0; i < size; i++) {
        printf(" %d", ary1[i]);
    }
    printf("\n");

    return 0;
}

void copyarray(int *ary1, int *ary2, int size) {
    int i; 

    for (i = 0; i < size; i++) {
        *(ary2+i) = *(ary1+i);
    }
}
