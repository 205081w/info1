#include <stdio.h>

int main() {
	int i, j;

	for (j = 0; j < 4; j++) {
		for (i = 0; i < 4; i++) {
			if (j == 1 && i > 1) {
				break;
			}
			printf("%5d", (j*4)+i);
		}
		printf("\n");
	}

	return 0;
}

