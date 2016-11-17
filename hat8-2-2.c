#include <stdio.h>

void swapd(double *pa, double *pb);

int main() {
    double pa = 3.2, pb = 5.4;

    printf("before swap pa is %f, pb is %f\n", pa, pb);
    swapd(&pa, &pb);
    printf("after  swap pa is %f, pb is %f\n", pa, pb);

    return 0;
}

void swapd(double *pa, double *pb) {
    double tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

