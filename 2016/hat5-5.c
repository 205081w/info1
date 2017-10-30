#include <stdio.h>

int main() {
	int i, j;

	for (j = 1; j <= 9; j++) {
		for (i = 1; i <= 9; i++) {
			printf("%5d", j*i);
		}
		printf("\n");
	}

	return 0;

}

