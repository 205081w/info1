#include <stdio.h>

int main() {
    int num;
    double dnum;
    char ch;
    char str[32];

    printf("Input string:");
    scanf("%s", str);
    printf("\nInt: %d, Num: %f, Char: %c, Str: %s\n", num, dnum, ch, str);

    return 0;
}
