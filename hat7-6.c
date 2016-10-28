#include <stdio.h>

int getn() {
    int x;
    fflush(stdout);
    scanf("%d", &x);
    return x;
}

int gcd(int a, int b) {
    if (a % b != 0) {
        return gcd(b, a%b);
    } else {
        return b;
    }
}

int main() {
    int a, b;

    printf("a = ");
    a = getn();
    printf("b = ");
    b = getn();

    printf("%d and %d's gcd is %d\n", a, b, gcd(a, b));

    return 0;
}


