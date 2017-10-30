#include <stdio.h>

void CalcMaxMin(int *ary, int size, int *max, int *min);

int main() {
    int ary[] = {3, 1, 4, 2, 5};
    int size = 5;
    int max, min;

    CalcMaxMin(ary, size, &max, &min);
    printf("max = %d, min = %d\n", max, min);

    return 0;
}

void CalcMaxMin(int *ary, int size, int *max, int *min) {
    int i;

    *max = *(ary);
    *min = *(ary);

    for (i = 0; i < size; i++) {
        if (*max < *(ary+i)) {
            *max = *(ary+i);
        }
        if (*min > *(ary+i)) {
            *min = *(ary+i);
        }
    }
}

