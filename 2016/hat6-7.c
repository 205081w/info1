#include <stdio.h>

int main() {
    int i, flg;
    int arA[] = {1, 2, 3, 7, 8, 9, 6, 5, 4};
    int arB[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    for (i = 0; i < 9; i++) {
        arB[arA[i]-1] = 1;
    }

    flg = 0;
    for (i = 0; i < 9; i++) {
        if (arB[i] == 0) {
            flg = 1;
        }
    }

    if (flg == 1) {
        printf("Faild\n");
    } else {
        printf("Success\n");
    }

    return 0;
}
