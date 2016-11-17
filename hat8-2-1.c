#include <stdio.h>

void swapn(int *pa, int *pb);

int main() {
    int pa = 3, pb = 5;

    printf("before swap pa is %d, pb is %d\n", pa, pb);
    swapn(&pa, &pb);
    printf("after  swap pa is %d, pb is %d\n", pa, pb);

    return 0;
}

void swapn(int *pa, int *pb) {
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

