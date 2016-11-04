#include <stdio.h>

int sumarray(int *ary); 

int main() {
    int ary[] = {3, 4, 1, 2, 5, -1};
    int sum;

    sum = sumarray(ary);
    printf("sum = %d\n", sum);

    return 0;
}

int sumarray(int *ary) {
    int i = 0, sum = 0;

    while (*(ary+i) != -1) {
        sum += *(ary+i);
        i++;
    }
    return sum;
}

