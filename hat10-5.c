#include <stdio.h>

int main() {
    int i;
    int point[32];
    int max, min;


    i = 0;
    while (1) {
        printf("Input point of student%d: ", i+1);
        scanf("%d", point+i);
        if (point[i] == -1) break;
        i++;
    }
    
    i = 0;
    max = point[0];
    min = point[0];
    while (1) {
        if (point[i] == -1) break;
        if (max < point[i]) max = point[i];
        if (min > point[i]) min = point[i];
        i++;
    }

    printf("max = %d\nmin = %d\n", max, min);

    return 0;
}

