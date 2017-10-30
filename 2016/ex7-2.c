#include <stdio.h>

int getn() {
    int x;
    fflush(stdout);
    scanf("%d", &x);
    return x;
}

int factorial(int x) {
    if (x > 1) {
        return (x * factorial(x-1));
    } else {
        return 1;
    }
}

int main() {
    int n, x;
    printf("x = ");
    x = getn();
    n = factorial(x);
    printf("x!=%d\n", n);
    return 0;
}
