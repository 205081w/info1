#include <stdio.h>

void ntwice(int *pa);

int main() {
    int a = 7;
    int pa;

    pa = a;

    ntwice(&pa);

    printf("%d's twice: %d\n", a, pa);

    return 0;
}

void ntwice(int *pa) {
    *pa *= 2;
}


