#include <stdio.h>

void sort2(int *pa, int *pb);
void swapn(int *pa, int *pb);

int main() {
    int pa = 3, pb = 5;

    printf("before sort: pa is %d, pb is %d\n", pa, pb);
    sort2(&pa, &pb);
    printf("after  sort: pa is %d, pb is %d\n", pa, pb);

    return 0;
}

void sort2(int *pa, int *pb) {
    if (*pa < *pb) {
        swapn(pa, pb);
    }
}

void swapn(int *pa, int *pb) {
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

