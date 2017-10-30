#include <stdio.h>
int sumarray(int *ary, int size);

int main() {
    int sum, array[] = {3, 1, 4, 5};

    sum = sumarray(array, 4);
    printf("sum = %d\n", sum);
    return 0;
}

int sumarray(int *ary, int size) {
    int i, sum1 = 0;

    for (i = 0; i < size; i++) {
        sum1 += *(ary+i);
    }
    return sum1;
}

