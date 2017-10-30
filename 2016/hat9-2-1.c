#include <stdio.h>

void printarray(int *ary, int size); 

int main() {
    int ary[] = {3, 4, 1, 2, 5};
    int size = 5;

    printf("array: ");
    printarray(ary, size);

    return 0;
}

void printarray(int *ary, int size) {
    int i;

    for (i = 0; i < size; i++) {
        printf("%d ", *(ary+i));
    }
    printf("\n");
}

