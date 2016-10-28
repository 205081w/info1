#include <stdio.h>

int main() {
	int i, j;

	for (j = 0; j < 4; j++) {
		if (j == 2) {
			continue;
		}
		for (i = 0; i < 4; i++) {
			printf("%5d", (j*4)+i);
		}
		printf("\n");
	}

	return 0;
}

