#include <stdio.h>

int getn() {
    int x;
    fflush(stdout);
    scanf("%d", &x);
    return x;
}

int main() {
    int i, j, num;
    double ave;
    int arA[50];

    i = 0;

    while (num != -1) {
        num = getn();
        if (num == -1) break;
        arA[i] = num;
        i++;
    }

    ave = 0;
    for (j = 0; j < i; j++) {
        ave += arA[j];
    }
    ave /= i;

    printf("num = %d, ave = %f\n", i, ave);

    return 0;
}

