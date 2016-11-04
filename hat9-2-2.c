#include <stdio.h>

int minarray(int *ary, int size); 

int main() {
    int min, ary[] = {3, 4, 1, 2, 5};
    int size = 5;

    min = minarray(ary, size);
    printf("min = %d\n", min);

    return 0;
}

int minarray(int *ary, int size) {
    int i, min1;

    min1 = *(ary);
    for (i = 1; i < size; i++) {
        if (*(ary+i) < min1) {
            min1 = *(ary+i);
        }
    }
    return min1;
}

