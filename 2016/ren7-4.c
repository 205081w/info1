#include <stdio.h>

int getn() {
    int x;
    fflush(stdout);
    scanf("%d", &x);
    return x;
}

int Npow(int a, int b) {
    if (b > 1) {
        return a * Npow(a, b-1);
    } else {
        return a;
    }
}

int main() {
    int a, b, num;

    printf("a = ");
    a = getn();
    printf("b = ");
    b = getn();

    num = Npow(a, b);
    printf("a^b = %d\n", num);

    return 0;
}

