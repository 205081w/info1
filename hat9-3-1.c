#include <stdio.h>
int getn() {
    int x;
    fflush(stdout);
    scanf("%d", &x);
    return x;
}

void intputarray(int *ary); 

int main() {
    int i, ary[100];

    intputarray(ary);
    printf("array: ");
    i = 0;
    while (ary[i] != -1) {
        printf(" %d", ary[i]);
        i++;
    }
    printf("\n");

    return 0;
}

void intputarray(int *ary) {
    int i = 0;

    while (1) {
        *(ary+i) = getn();
        if (*(ary+i) == -1) {
            break;
        }
        i++;
    }
}

