#include <stdio.h>

int main() {
    int num1 = 1;
    int num2 = -1;
    int i;

    for (i = 0; i < 8; i++) {
        num1 = num1 << 1;
        num2 = num2 << 1;
    }
    printf("Bit shift left\n");
    printf(" 1 << 8 = %d\n", num1);
    printf("-1 << 8 = %d\n", num2);

    num1 = 1; num2 = -1;
    for (i = 0; i < 8; i++) {
        num1 = num1 >> 1;
        num2 = num2 >> 1;
    }
    printf("Bit shift right\n");
    printf(" 1 >> 8 = %d\n", num1);
    printf("-1 >> 8 = %d\n", num2);

    return 0;
}
