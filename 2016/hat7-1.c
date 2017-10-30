#include <stdio.h>
int getn() {
    int x;
    fflush(stdout);
    scanf("%d", &x);
    return x;
}

int ToHex1(int a) {
    if (a < 10) {
        printf("%d\n", a);
    } else {
        printf("%c\n", 'a'+(a-10));
    }
    return 0;
}

int main() {
    int n;

    printf("n = ");
    n = getn();
    printf("%d = 0x", n);
    ToHex1(n);

    return 0;
}
