#include <stdio.h>

int maxarray(int *ary); 

int main() {
    int ary[] = {3, 4, 1, 2, 5, -1};
    int max;

    max = maxarray(ary);
    printf("max = %d\n", max);

    return 0;
}

int maxarray(int *ary) {
    int i = 1, max;

    max = *ary;
    while (*(ary+i) != -1) {
        if (max < *(ary+i)) {
            max = *(ary+i);
        }
        i++;
    }
    return max;
}

