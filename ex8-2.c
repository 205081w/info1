#include <stdio.h>
void divmod(int a, int b, int *pq, int *pr);

int main() {
    int a = 10, b = 7;
    int q, r;

    divmod(a, b, &q, &r);
    printf("%3d/%3d=%3d ... %3d\n", a, b, q, r);
    return 0;
}

void divmod(int a, int b, int *pq, int *pr) {
    *pq = a/b;
    *pr = a % b;
}

