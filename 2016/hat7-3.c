#include <stdio.h>

int isprime (int n) {
    int i;

    i = n-1;

    while (i > 1) {
        if (n % i == 0 || n == 1) {
            return 0;
        }
        i--;
    }

    return 1;
}

int main() {
    int i;

    for (i = 1; i < 100; i++) {
        if (isprime(i)) {
            printf("%4d", i);
        }
    }
    printf("\n");
    return 0;
}

