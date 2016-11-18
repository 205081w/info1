#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i;
    int ary[32];
    if (argc==1) {
        printf("Usage: %s number\n", argv[0]);
        return 0;
    } else if (argc > 32) {
        printf("over flow (input number under 32)\n");
        return 0;
    }

    for (i = 0; i < argc; i++) {
        scanf("%d", ary+i);
    }

    for (i = 0; i < argc; i++) {
        printf("%d ", *(ary+i));
    }

    printf("\n");

    return 0;
}

