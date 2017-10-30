#include <stdio.h>

int main() {
    char str[] = "Hello";
    int i;

    printf("str = %s\n", str);
    for (i = 0; i < 6; i++) {
        printf("char = %c, code = 0x %02x\n", str[i], str[i]);
    }

    return 0;
}
