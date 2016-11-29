#include <stdio.h>

#define ARYSIZE 5

int main() {
    int array[] = {4, 6, 3, 6, 10};
    int i, j;

    for (i = 0; i < ARYSIZE; i++) {
        switch(i) {
            case 0:
                printf("Apple :");
                break;
            case 1:
                printf("orange:");
                break;
            case 2:
                printf("banana:");
                break;
            case 3:
                printf("melon :");
                break;
            case 4:
                printf("Peach :");
                break;
        }
        for (j = 0; j < array[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;

}
