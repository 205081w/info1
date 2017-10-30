#include <stdio.h>

void encrypt(char *pc, int *pn);

int main() {
    int n = 3;
    char c = 'a';
    char pc;

    pc = c;

    encrypt(&pc, &n);
    printf("%c's encrypt%d: %c\n", c, n, pc);
    return 0;
}

void encrypt(char *pc, int *pn) {
    *pc += *pn;
}

