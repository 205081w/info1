#include <stdio.h>

int main() {
    int i, max;
    double  ave;
    int arA[] = {87, 76, 45, 73, 66, -1};

    i = 1;

    max = arA[0];
    ave = arA[0];

    while (arA[i] != -1) {
        if (max < arA[i]) {
            max = arA[i];
        }
        ave += arA[i];
        i++;
    }

    ave /= i;

    printf("max = %d\n", max);
    printf("ave = %f\n", ave);
    return 0;
}

