#include <stdio.h>

int DMin(int a, int b);

int main() {
    int num;
    int a = 7, b = 5;

    num = DMin(a, b);
    printf("%d\n", num);

    return 0;
}

int DMin(int a, int b) {
    if (a > b) {
        return b;
    } else {
        return a;
    }
}
