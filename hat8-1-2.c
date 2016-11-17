#include <stdio.h>

void encrypt2(char *pc);

int main() {
    char c = 'a';
    char pc;

    pc = c;

    encrypt2(&pc);
    printf("%c's encrypt2: %c\n", c, pc);
    return 0;
}

void encrypt2(char *pc) {
    *pc += 2;
}

