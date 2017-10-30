#include <stdio.h>

void dtwice(double *pa);

int main() {
    double a = 7.2;
    double pa;

    pa = a;

    dtwice(&pa);

    printf("%f's twice: %f\n", a, pa);

    return 0;
}

void dtwice(double *pa) {
    *pa *= 2;
}


