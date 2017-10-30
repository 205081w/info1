#include <stdio.h>

int main() {
    int opc;
    double a, b;

    while (1) {
        printf("Input operation code (1:add, 2:sub, 3:mul, 4:div, 5:end)\n");
        scanf("%d", &opc);
        if (opc == 5) break;

        printf("Input number1: ");
        scanf("%lf", &a);
        printf("Input number2: ");
        scanf("%lf", &b);

        if (opc == 1) {
            printf("%.1f + %.1f = %.1f\n", a, b, a+b);
        } else if (opc == 2) {
            printf("%.1f - %.1f = %.1f\n", a, b, a-b);
        } else if (opc == 3) {
            printf("%.1f * %.1f = %.1f\n", a, b, a*b);
        } else if (opc == 4) {
            printf("%.1f / %.1f = %.1f\n", a, b, a/b);
        } else {
            printf("invalid operation code\n");
            break;
        }
    }

    return 0;
}
