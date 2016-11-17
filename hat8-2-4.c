#include <stdio.h>

void npower(int *pa, int n);

int main() {
    int a = 4, n = 2;
    int pa;

    pa = a;

    npower(&pa, n);
    printf("%d power %d is %d\n", a, n, pa);

    return 0;
}

void npower(int *pa, int n) {
    int i, a;
    a = *pa;
    for (i = 1; i < n; i++) {
        *pa *= a;
    }
}
