#include <stdio.h>

double cm2inch(double a);

int main() {
    double num;
    double a = 7.0;

    num = cm2inch(a);

    printf("%f cm = %f inch\n", a, num);

    return 0;
}

double cm2inch(double a) {
    return a/2.54;
}
