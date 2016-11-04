#include <stdio.h>

int minarray(int *ary); 

int main() {
    int ary[] = {3, 4, 1, 2, 5, -1};
    int min;

    min = minarray(ary);
    printf("min = %d\n", min);

    return 0;
}

int minarray(int *ary) {
    int i = 1, min;

    min = *ary;
    while (*(ary+i) != -1) {
        if (min > *(ary+i)) {
            min = *(ary+i);
        }
        i++;
    }
    return min;
}

