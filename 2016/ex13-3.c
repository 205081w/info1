#include <stdio.h>

void showBinary(char c);

int main() {
    char a, b;
    a = 15;
    b = 51;
    printf("a:");
    showBinary(a);
    printf("\n b:");
    showBinary(b);
    printf("\n a&b:");
    showBinary(a&b);
    printf("\n a|b:");
    showBinary(a|b);
    printf("\n a^b:");
    showBinary(a^b);
    printf("\n ~a:");
    showBinary(~a);
    printf("\n");

    return 0;
}
void showBinary(char c) {
    char i;
    for (i = 0; i < 8; i++) {
        if (c & (128 >> i)) printf("1");
        else printf("0");
    }
}

