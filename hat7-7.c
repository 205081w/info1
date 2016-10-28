#include <stdio.h>

int fib(int n) {
    if (n > 1) {
        return fib(n-1)+fib(n-2);
    } else {
        return n;
    }
}

int main() {
    int i;

    for (i = 0; i < 40; i++) {
        printf("fib(%d) = %d\n", i, fib(i));
    }

    return 0;
}
