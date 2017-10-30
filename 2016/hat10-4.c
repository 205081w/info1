#include <stdio.h>

int main() {
    int num, i;
    int point[32];
    int max, min;

    printf("Input number of student: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("Input point of student%d: ", i+1);
        scanf("%d", point+i);
    }
    
    max = point[0];
    min = point[0];
    for (i = 0; i < num; i++) {
        if (max < point[i]) max = point[i];
        if (min > point[i]) min = point[i];
    }

    printf("max = %d\nmin = %d\n", max, min);

    return 0;
}

