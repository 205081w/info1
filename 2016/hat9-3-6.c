#include <stdio.h>

double avearray(int *ary, int size); 

int main() {
    int ary[] = {3, 4, 1, 2, 5, -1};
    int size = 5;
    double ave;

    ave = avearray(ary, size);
    printf("ave = %f\n", ave);

    return 0;
}

double avearray(int *ary, int size) {
    int i = 0, ave = 0;

    while (*(ary+i) != -1) {
        ave += *(ary+i);
        i++;
    }
    ave /= size;

    return ave;
}

