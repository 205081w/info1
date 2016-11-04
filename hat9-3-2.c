#include <stdio.h>

void printarray(int *ary); 

int main() {
    int ary[] = {3, 4, 1, 2, 5, -1};

    printf("array: ");
    printarray(ary);

    return 0;
}

void printarray(int *ary) {
    int i = 0;

    while (*(ary+i) != -1) {
        printf("%d ", *(ary+i));
        i++;
    }
    printf("\n");
}

