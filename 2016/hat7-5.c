#include <stdio.h>

double CalcDouble(double n) {
    return n * 2.0;
}

int main() {
    double n = 0.05;
    int i;

    for (i = 0; i < 100; i++) {
        n = CalcDouble(n);
    }

    printf("%f\n", n);

    return 0;
}
