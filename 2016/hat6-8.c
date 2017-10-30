#include <stdio.h>

int main() {
    int i, j, num, flg;
    int arA[100];

    arA[0] = 2;
    num = 1;

    for (i = 3; i < 1000; i++) {
        flg = 0;
        for (j = num-1; j > 1; j--) {
            if (i % arA[j] == 0) {
                flg = 1;
            }
        }
        if (flg == 1) continue;
        arA[num] = i;
        num++;
    }

    for (i = 0; i < 100; i++) {
        printf("%4d", arA[i]);
    }

    return 0;
}


