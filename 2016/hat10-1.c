#include <stdio.h>

int main() {
    int n;
    char a;

    printf("Input num: ");
    scanf("%d", &n);
    printf("Input char: ");
    scanf(" %c", &a);

    printf("hex: 0x%02x, Int: %d, char: %c\n", n, n, a);

    return 0;
}

