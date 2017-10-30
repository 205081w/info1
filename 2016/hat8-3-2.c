#include <stdio.h>

void sort3(int *pa, int *pb, int *pc);
void swapn(int *pa, int *pb);

int main() {
    int pa = 3, pb = 5, pc = 4;

    printf("before sort: pa is %d, pb is %d, pc is %d\n", pa, pb, pc);
    sort3(&pa, &pb, &pc);
    printf("after  sort: pa is %d, pb is %d, pc is %d\n", pa, pb, pc);

    return 0;
}

void sort3(int *pa, int *pb, int *pc) {
    if (*pa < *pc) {
        swapn(pa, pc);
    }
    if (*pa < *pb) {
        swapn(pa, pb);
    }
    if (*pb < *pc) {
        swapn(pb, pc);
    }
}

void swapn(int *pa, int *pb) {
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

