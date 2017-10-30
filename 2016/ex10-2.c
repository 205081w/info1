#include <stdio.h>

int main() {
    char a, b;

    printf("scanfによる入力(1回目):");
    scanf("%c", &a);
    printf("scanfによる入力(2回目):");
    scanf("%c", &b);
    printf("\na = %c, b = %c\n", a, b);
    printf("a = 0x%02x, b = 0x%02x.\n", a, b);

    return 0;
}


