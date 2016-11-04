#include <stdio.h>

double avearray(int *ary, int size); 

int main() {
    int ary[] = {3, 3, 1, 2, 5};
    int size = 5;
    double ave;

    ave = avearray(ary, size);
    printf("ave = %f\n", ave);

    return 0;
}

double avearray(int *ary, int size) {
    int i; 
    double ave = 0;

    for (i = 0; i < size; i++) {
        ave += *(ary+i);
    }
    ave /= size;

    return ave;
}

