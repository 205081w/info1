#include <stdio.h>

int main() {
    int n[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("input number %d: ", i);
        scanf("%d", n+i);
    }

    for (i = 0; i < 10; i++) {
        printf("number %d: %d\n", i, n[i]);
    }

    return 0;
}
