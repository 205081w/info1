#include <stdio.h>

int getn() {
    int x;
    fflush(stdout);
    scanf("%d", &x);
    return x;
}

int NMax3(int a, int b, int c) {
    if (a > b) {
        if (a > c) {
            return a;
        } else {
            return c;
        }
    } else {
        if (b > c) {
            return b;
        } else {
            return c;
        }
    }
}

int main() {
    int a, b, c;

    printf("a = ");
    a = getn();
    printf("b = ");
    b = getn();
    printf("c = ");
    c = getn();

    printf("max is %d\n", NMax3(a, b, c));
    return 0;
}

