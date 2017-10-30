#include <stdio.h>

void cleararray(int *ary, int size); 

int main() {
    int i, ary[] = {3, 4, 1, 2, 5};
    int size = 5;

    printf("array : ");
    for (i = 0; i < size; i++) {
        printf("%d ", ary[i]);
    }
    
    printf("\nClear!!\n");
    cleararray(ary, size);

    printf("array : ");
    for (i = 0; i < size; i++) {
        printf("%d ", ary[i]);
    }
    printf("\n");
    return 0;
}

void cleararray(int *ary, int size) {
    int i;

    for (i = 0; i < size; i++) {
        *(ary+i) = 0;
    }
}

