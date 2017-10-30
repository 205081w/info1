#include <stdio.h>

int sum(int a, int b);

int main() {
    int num;
    int x = 3, y = 4;
    num = sum(x, y);
    printf("%d\n", num);
    return 0;
}

int sum(int a, int b) {
    int c;
    c = a + b;
    return c;
}
