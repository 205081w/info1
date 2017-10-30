#include <stdio.h>

int main() {
    double a, b;

    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);

    printf("%.1f / %.1f = %.1f\n", a, b, a/b);

    return 0;
}


