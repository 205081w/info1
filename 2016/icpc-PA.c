#include <stdio.h>

int main() {
    int i, j, n;
    int score[1000];
    int diffmin;

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        for (i = 0; i < n; i++) {
            scanf("%d", &score[i]);
        }

        diffmin = 1000000; 
        for (i = 0; i < n; i++) {
            for (j = n-1; j > i; j--) {
                if (score[i] - score[j] > 0) {
                    if (diffmin > (score[i] - score[j])) {
                        diffmin = score[i] - score[j];
                    }
                } else {
                    if (diffmin > (score[j] - score[i])) {
                        diffmin = (score[j] - score[i]);
                    }
                }
            }
        }

        printf("%d\n", diffmin);
    }

    return 0;
}

