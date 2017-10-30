#include <stdio.h>
int getn() {
    int x;
    fflush(stdout);
    scanf("%d", &x);
    return x;
}

int ToHex1(int a) {
    if (a < 10) {
        printf("%d", a);
    } else {
        printf("%c", 'a'+(a-10));
    }
    return 0;
}

int ToHex2(int a) {
    int d;
    d = a % 16;
    a = a / 16;
    ToHex1(a);
    ToHex1(d);
    return 0;
}

int main() {
    int n;

    printf("n = ");
    n = getn();
    printf("%d = 0x", n);
    ToHex2(n);
    printf("\n");

    return 0;
}
