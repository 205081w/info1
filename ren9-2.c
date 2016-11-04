#include <stdio.h>
int max(int *ary, int size);

int main() {
    int max1, array[] = {3, 1, 4, 5};

    max1 = max(array, 4);
    printf("max = %d\n", max1);
    return 0;
}

int max(int *ary, int size) {
    int i, max1 = 0;

    max1 = *ary;
    for (i = 0; i < size; i++) {
        if (*(ary+i) > max1) {
            max1 = *(ary+i);
        }
    }
    return max1;
}

