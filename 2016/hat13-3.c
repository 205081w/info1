#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, input;

    srand(time(NULL));
    num = rand()%100;
    while (1) {
        printf("Input your guess: ");
        scanf("%d", &input);
        if (input == num) {
            printf("Bingo!!\n");
            break;
        } else if (input < num) {
            printf("Small\n");
        } else {
            printf("Big\n");
        }
    }

    return 0;
}

